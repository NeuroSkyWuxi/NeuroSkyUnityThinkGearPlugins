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

// System.String
struct String_t;
// System.Runtime.Remoting.ActivatedClientTypeEntry
struct ActivatedClientTypeEntry_t2438336762;
// System.Type
struct Type_t;
// System.Runtime.Remoting.ActivatedServiceTypeEntry
struct ActivatedServiceTypeEntry_t667738406;
// System.Runtime.Remoting.WellKnownClientTypeEntry
struct WellKnownClientTypeEntry_t3988481846;
// System.Runtime.Remoting.WellKnownServiceTypeEntry
struct WellKnownServiceTypeEntry_t1477595754;
// System.Runtime.Remoting.ChannelData
struct ChannelData_t140186591;
// System.Runtime.Remoting.ProviderData
struct ProviderData_t816409465;
// System.Collections.ArrayList
struct ArrayList_t3948406897;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Type2863145774.h"
#include "mscorlib_System_Runtime_Remoting_ActivatedClientTy2438336762.h"
#include "mscorlib_System_Runtime_Remoting_ActivatedServiceTy667738406.h"
#include "mscorlib_System_Runtime_Remoting_WellKnownClientTy3988481846.h"
#include "mscorlib_System_Runtime_Remoting_WellKnownServiceT1477595754.h"
#include "mscorlib_System_Runtime_Remoting_ChannelData140186591.h"
#include "mscorlib_System_Runtime_Remoting_ProviderData816409465.h"
#include "mscorlib_System_Collections_ArrayList3948406897.h"

// System.Void System.Runtime.Remoting.RemotingConfiguration::.cctor()
extern "C"  void RemotingConfiguration__cctor_m689717558 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.RemotingConfiguration::get_ApplicationName()
extern "C"  String_t* RemotingConfiguration_get_ApplicationName_m2748314218 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.RemotingConfiguration::set_ApplicationName(System.String)
extern "C"  void RemotingConfiguration_set_ApplicationName_m755243983 (Il2CppObject * __this /* static, unused */, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.RemotingConfiguration::get_ProcessId()
extern "C"  String_t* RemotingConfiguration_get_ProcessId_m583559449 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.RemotingConfiguration::LoadDefaultDelayedChannels()
extern "C"  void RemotingConfiguration_LoadDefaultDelayedChannels_m1856615844 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.ActivatedClientTypeEntry System.Runtime.Remoting.RemotingConfiguration::IsRemotelyActivatedClientType(System.Type)
extern "C"  ActivatedClientTypeEntry_t2438336762 * RemotingConfiguration_IsRemotelyActivatedClientType_m3024852690 (Il2CppObject * __this /* static, unused */, Type_t * ___svrType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.RemotingConfiguration::RegisterActivatedClientType(System.Runtime.Remoting.ActivatedClientTypeEntry)
extern "C"  void RemotingConfiguration_RegisterActivatedClientType_m3696695158 (Il2CppObject * __this /* static, unused */, ActivatedClientTypeEntry_t2438336762 * ___entry0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.RemotingConfiguration::RegisterActivatedServiceType(System.Runtime.Remoting.ActivatedServiceTypeEntry)
extern "C"  void RemotingConfiguration_RegisterActivatedServiceType_m3120657222 (Il2CppObject * __this /* static, unused */, ActivatedServiceTypeEntry_t667738406 * ___entry0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.RemotingConfiguration::RegisterWellKnownClientType(System.Runtime.Remoting.WellKnownClientTypeEntry)
extern "C"  void RemotingConfiguration_RegisterWellKnownClientType_m2985305086 (Il2CppObject * __this /* static, unused */, WellKnownClientTypeEntry_t3988481846 * ___entry0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.RemotingConfiguration::RegisterWellKnownServiceType(System.Runtime.Remoting.WellKnownServiceTypeEntry)
extern "C"  void RemotingConfiguration_RegisterWellKnownServiceType_m826541254 (Il2CppObject * __this /* static, unused */, WellKnownServiceTypeEntry_t1477595754 * ___entry0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.RemotingConfiguration::RegisterChannelTemplate(System.Runtime.Remoting.ChannelData)
extern "C"  void RemotingConfiguration_RegisterChannelTemplate_m2900462572 (Il2CppObject * __this /* static, unused */, ChannelData_t140186591 * ___channel0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.RemotingConfiguration::RegisterClientProviderTemplate(System.Runtime.Remoting.ProviderData)
extern "C"  void RemotingConfiguration_RegisterClientProviderTemplate_m3268554933 (Il2CppObject * __this /* static, unused */, ProviderData_t816409465 * ___prov0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.RemotingConfiguration::RegisterServerProviderTemplate(System.Runtime.Remoting.ProviderData)
extern "C"  void RemotingConfiguration_RegisterServerProviderTemplate_m3283034669 (Il2CppObject * __this /* static, unused */, ProviderData_t816409465 * ___prov0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.RemotingConfiguration::RegisterChannels(System.Collections.ArrayList,System.Boolean)
extern "C"  void RemotingConfiguration_RegisterChannels_m76287740 (Il2CppObject * __this /* static, unused */, ArrayList_t3948406897 * ___channels0, bool ___onlyDelayed1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.RemotingConfiguration::RegisterTypes(System.Collections.ArrayList)
extern "C"  void RemotingConfiguration_RegisterTypes_m3102371468 (Il2CppObject * __this /* static, unused */, ArrayList_t3948406897 * ___types0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.RemotingConfiguration::SetCustomErrorsMode(System.String)
extern "C"  void RemotingConfiguration_SetCustomErrorsMode_m4004559116 (Il2CppObject * __this /* static, unused */, String_t* ___mode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
