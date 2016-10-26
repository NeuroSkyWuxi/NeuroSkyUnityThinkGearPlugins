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

// System.Runtime.Remoting.ClientIdentity
struct ClientIdentity_t2516200039;
// System.String
struct String_t;
// System.Runtime.Remoting.ObjRef
struct ObjRef_t2484604634;
// System.MarshalByRefObject
struct MarshalByRefObject_t1219038801;
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Runtime_Remoting_ObjRef2484604634.h"
#include "mscorlib_System_MarshalByRefObject1219038801.h"
#include "mscorlib_System_Type2863145774.h"

// System.Void System.Runtime.Remoting.ClientIdentity::.ctor(System.String,System.Runtime.Remoting.ObjRef)
extern "C"  void ClientIdentity__ctor_m3595127653 (ClientIdentity_t2516200039 * __this, String_t* ___objectUri0, ObjRef_t2484604634 * ___objRef1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.MarshalByRefObject System.Runtime.Remoting.ClientIdentity::get_ClientProxy()
extern "C"  MarshalByRefObject_t1219038801 * ClientIdentity_get_ClientProxy_m4126686292 (ClientIdentity_t2516200039 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ClientIdentity::set_ClientProxy(System.MarshalByRefObject)
extern "C"  void ClientIdentity_set_ClientProxy_m12327679 (ClientIdentity_t2516200039 * __this, MarshalByRefObject_t1219038801 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.ObjRef System.Runtime.Remoting.ClientIdentity::CreateObjRef(System.Type)
extern "C"  ObjRef_t2484604634 * ClientIdentity_CreateObjRef_m2789811095 (ClientIdentity_t2516200039 * __this, Type_t * ___requestedType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.ClientIdentity::get_TargetUri()
extern "C"  String_t* ClientIdentity_get_TargetUri_m3456785152 (ClientIdentity_t2516200039 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
