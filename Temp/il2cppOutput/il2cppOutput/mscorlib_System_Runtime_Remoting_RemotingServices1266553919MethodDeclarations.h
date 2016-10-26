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

// System.Reflection.MethodBase
struct MethodBase_t318515428;
// System.Type
struct Type_t;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.Runtime.Remoting.ObjRef
struct ObjRef_t2484604634;
// System.Runtime.Remoting.Proxies.RealProxy
struct RealProxy_t2420216138;
// System.Runtime.Remoting.Messaging.IMethodMessage
struct IMethodMessage_t3612140663;
// System.Type[]
struct TypeU5BU5D_t3339007067;
// System.Runtime.Remoting.ActivatedClientTypeEntry
struct ActivatedClientTypeEntry_t2438336762;
// System.Object[]
struct ObjectU5BU5D_t1108656482;
// System.Runtime.Remoting.Identity
struct Identity_t3943038460;
// System.Runtime.Remoting.ClientIdentity
struct ClientIdentity_t2516200039;
// System.Runtime.Remoting.Messaging.IMessageSink
struct IMessageSink_t2257382795;
// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t2542955999;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type2863145774.h"
#include "mscorlib_System_Reflection_MethodBase318515428.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Runtime_Remoting_ObjRef2484604634.h"
#include "mscorlib_System_Runtime_Remoting_ActivatedClientTy2438336762.h"
#include "mscorlib_System_Runtime_Remoting_WellKnownObjectMo3203507465.h"
#include "mscorlib_System_Runtime_Remoting_ServerIdentity2542955999.h"
#include "mscorlib_System_Runtime_Remoting_Identity3943038460.h"

// System.Void System.Runtime.Remoting.RemotingServices::.cctor()
extern "C"  void RemotingServices__cctor_m722143346 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Runtime.Remoting.RemotingServices::GetVirtualMethod(System.Type,System.Reflection.MethodBase)
extern "C"  MethodBase_t318515428 * RemotingServices_GetVirtualMethod_m2492796715 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, MethodBase_t318515428 * ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.RemotingServices::IsTransparentProxy(System.Object)
extern "C"  bool RemotingServices_IsTransparentProxy_m3544746083 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___proxy0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Runtime.Remoting.RemotingServices::GetServerTypeForUri(System.String)
extern "C"  Type_t * RemotingServices_GetServerTypeForUri_m2370855021 (Il2CppObject * __this /* static, unused */, String_t* ___URI0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.RemotingServices::Unmarshal(System.Runtime.Remoting.ObjRef)
extern "C"  Il2CppObject * RemotingServices_Unmarshal_m3453424695 (Il2CppObject * __this /* static, unused */, ObjRef_t2484604634 * ___objectRef0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.RemotingServices::Unmarshal(System.Runtime.Remoting.ObjRef,System.Boolean)
extern "C"  Il2CppObject * RemotingServices_Unmarshal_m3493161574 (Il2CppObject * __this /* static, unused */, ObjRef_t2484604634 * ___objectRef0, bool ___fRefine1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Proxies.RealProxy System.Runtime.Remoting.RemotingServices::GetRealProxy(System.Object)
extern "C"  RealProxy_t2420216138 * RemotingServices_GetRealProxy_m469180406 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___proxy0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Runtime.Remoting.RemotingServices::GetMethodBaseFromMethodMessage(System.Runtime.Remoting.Messaging.IMethodMessage)
extern "C"  MethodBase_t318515428 * RemotingServices_GetMethodBaseFromMethodMessage_m589251925 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___msg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Runtime.Remoting.RemotingServices::GetMethodBaseFromName(System.Type,System.String,System.Type[])
extern "C"  MethodBase_t318515428 * RemotingServices_GetMethodBaseFromName_m1109362245 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, String_t* ___methodName1, TypeU5BU5D_t3339007067* ___signature2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Runtime.Remoting.RemotingServices::FindInterfaceMethod(System.Type,System.String,System.Type[])
extern "C"  MethodBase_t318515428 * RemotingServices_FindInterfaceMethod_m1641296449 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, String_t* ___methodName1, TypeU5BU5D_t3339007067* ___signature2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.RemotingServices::CreateClientProxy(System.Runtime.Remoting.ActivatedClientTypeEntry,System.Object[])
extern "C"  Il2CppObject * RemotingServices_CreateClientProxy_m1188122341 (Il2CppObject * __this /* static, unused */, ActivatedClientTypeEntry_t2438336762 * ___entry0, ObjectU5BU5D_t1108656482* ___activationAttributes1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.RemotingServices::CreateClientProxy(System.Type,System.String,System.Object[])
extern "C"  Il2CppObject * RemotingServices_CreateClientProxy_m1887308374 (Il2CppObject * __this /* static, unused */, Type_t * ___objectType0, String_t* ___url1, ObjectU5BU5D_t1108656482* ___activationAttributes2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.RemotingServices::CreateClientProxyForContextBound(System.Type,System.Object[])
extern "C"  Il2CppObject * RemotingServices_CreateClientProxyForContextBound_m9934294 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, ObjectU5BU5D_t1108656482* ___activationAttributes1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Identity System.Runtime.Remoting.RemotingServices::GetIdentityForUri(System.String)
extern "C"  Identity_t3943038460 * RemotingServices_GetIdentityForUri_m1730131113 (Il2CppObject * __this /* static, unused */, String_t* ___uri0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.RemotingServices::RemoveAppNameFromUri(System.String)
extern "C"  String_t* RemotingServices_RemoveAppNameFromUri_m1113505532 (Il2CppObject * __this /* static, unused */, String_t* ___uri0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.ClientIdentity System.Runtime.Remoting.RemotingServices::GetOrCreateClientIdentity(System.Runtime.Remoting.ObjRef,System.Type,System.Object&)
extern "C"  ClientIdentity_t2516200039 * RemotingServices_GetOrCreateClientIdentity_m3862611826 (Il2CppObject * __this /* static, unused */, ObjRef_t2484604634 * ___objRef0, Type_t * ___proxyType1, Il2CppObject ** ___clientProxy2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.RemotingServices::GetClientChannelSinkChain(System.String,System.Object,System.String&)
extern "C"  Il2CppObject * RemotingServices_GetClientChannelSinkChain_m3823167339 (Il2CppObject * __this /* static, unused */, String_t* ___url0, Il2CppObject * ___channelData1, String_t** ___objectUri2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.ServerIdentity System.Runtime.Remoting.RemotingServices::CreateWellKnownServerIdentity(System.Type,System.String,System.Runtime.Remoting.WellKnownObjectMode)
extern "C"  ServerIdentity_t2542955999 * RemotingServices_CreateWellKnownServerIdentity_m2420008897 (Il2CppObject * __this /* static, unused */, Type_t * ___objectType0, String_t* ___objectUri1, int32_t ___mode2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.RemotingServices::RegisterServerIdentity(System.Runtime.Remoting.ServerIdentity)
extern "C"  void RemotingServices_RegisterServerIdentity_m3253238710 (Il2CppObject * __this /* static, unused */, ServerIdentity_t2542955999 * ___identity0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.RemotingServices::GetProxyForRemoteObject(System.Runtime.Remoting.ObjRef,System.Type)
extern "C"  Il2CppObject * RemotingServices_GetProxyForRemoteObject_m1565953531 (Il2CppObject * __this /* static, unused */, ObjRef_t2484604634 * ___objref0, Type_t * ___classToProxy1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.RemotingServices::GetRemoteObject(System.Runtime.Remoting.ObjRef,System.Type)
extern "C"  Il2CppObject * RemotingServices_GetRemoteObject_m2559997024 (Il2CppObject * __this /* static, unused */, ObjRef_t2484604634 * ___objRef0, Type_t * ___proxyType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.RemotingServices::RegisterInternalChannels()
extern "C"  void RemotingServices_RegisterInternalChannels_m3428095417 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.RemotingServices::DisposeIdentity(System.Runtime.Remoting.Identity)
extern "C"  void RemotingServices_DisposeIdentity_m167351746 (Il2CppObject * __this /* static, unused */, Identity_t3943038460 * ___ident0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.RemotingServices::GetNormalizedUri(System.String)
extern "C"  String_t* RemotingServices_GetNormalizedUri_m2995472567 (Il2CppObject * __this /* static, unused */, String_t* ___uri0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
