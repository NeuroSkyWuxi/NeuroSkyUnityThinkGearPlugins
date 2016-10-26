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

// System.Runtime.Remoting.Proxies.RemotingProxy
struct RemotingProxy_t3846099589;
// System.Type
struct Type_t;
// System.Runtime.Remoting.ClientIdentity
struct ClientIdentity_t2516200039;
// System.String
struct String_t;
// System.Object[]
struct ObjectU5BU5D_t1108656482;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type2863145774.h"
#include "mscorlib_System_Runtime_Remoting_ClientIdentity2516200039.h"
#include "mscorlib_System_String7231557.h"

// System.Void System.Runtime.Remoting.Proxies.RemotingProxy::.ctor(System.Type,System.Runtime.Remoting.ClientIdentity)
extern "C"  void RemotingProxy__ctor_m1901097423 (RemotingProxy_t3846099589 * __this, Type_t * ___type0, ClientIdentity_t2516200039 * ___identity1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Proxies.RemotingProxy::.ctor(System.Type,System.String,System.Object[])
extern "C"  void RemotingProxy__ctor_m2863168224 (RemotingProxy_t3846099589 * __this, Type_t * ___type0, String_t* ___activationUrl1, ObjectU5BU5D_t1108656482* ___activationAttributes2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Proxies.RemotingProxy::.cctor()
extern "C"  void RemotingProxy__cctor_m4243178796 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.Proxies.RemotingProxy::get_TypeName()
extern "C"  String_t* RemotingProxy_get_TypeName_m4078823342 (RemotingProxy_t3846099589 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Proxies.RemotingProxy::Finalize()
extern "C"  void RemotingProxy_Finalize_m1311356449 (RemotingProxy_t3846099589 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
