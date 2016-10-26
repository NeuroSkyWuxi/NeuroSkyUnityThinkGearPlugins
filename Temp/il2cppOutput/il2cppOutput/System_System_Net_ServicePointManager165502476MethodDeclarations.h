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

// System.Net.ICertificatePolicy
struct ICertificatePolicy_t4188978778;
// System.Net.Security.RemoteCertificateValidationCallback
struct RemoteCertificateValidationCallback_t1894914657;
// System.Net.ServicePoint
struct ServicePoint_t4193060341;
// System.Uri
struct Uri_t1116831938;
// System.Net.IWebProxy
struct IWebProxy_t354717117;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_SecurityProtocolType2898870124.h"
#include "System_System_Uri1116831938.h"

// System.Void System.Net.ServicePointManager::.cctor()
extern "C"  void ServicePointManager__cctor_m1197717107 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ICertificatePolicy System.Net.ServicePointManager::get_CertificatePolicy()
extern "C"  Il2CppObject * ServicePointManager_get_CertificatePolicy_m2939782421 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ServicePointManager::get_CheckCertificateRevocationList()
extern "C"  bool ServicePointManager_get_CheckCertificateRevocationList_m2088706324 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.SecurityProtocolType System.Net.ServicePointManager::get_SecurityProtocol()
extern "C"  int32_t ServicePointManager_get_SecurityProtocol_m2377079580 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Security.RemoteCertificateValidationCallback System.Net.ServicePointManager::get_ServerCertificateValidationCallback()
extern "C"  RemoteCertificateValidationCallback_t1894914657 * ServicePointManager_get_ServerCertificateValidationCallback_m258265119 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ServicePoint System.Net.ServicePointManager::FindServicePoint(System.Uri,System.Net.IWebProxy)
extern "C"  ServicePoint_t4193060341 * ServicePointManager_FindServicePoint_m543399130 (Il2CppObject * __this /* static, unused */, Uri_t1116831938 * ___address0, Il2CppObject * ___proxy1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePointManager::RecycleServicePoints()
extern "C"  void ServicePointManager_RecycleServicePoints_m3960742511 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
