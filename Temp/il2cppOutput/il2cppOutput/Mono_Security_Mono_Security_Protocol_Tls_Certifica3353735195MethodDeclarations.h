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

// Mono.Security.Protocol.Tls.CertificateValidationCallback2
struct CertificateValidationCallback2_t3353735195;
// System.Object
struct Il2CppObject;
// Mono.Security.Protocol.Tls.ValidationResult
struct ValidationResult_t925859732;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t4135795358;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "Mono_Security_Mono_Security_X509_X509CertificateCo4135795357.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void Mono.Security.Protocol.Tls.CertificateValidationCallback2::.ctor(System.Object,System.IntPtr)
extern "C"  void CertificateValidationCallback2__ctor_m1854682743 (CertificateValidationCallback2_t3353735195 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.ValidationResult Mono.Security.Protocol.Tls.CertificateValidationCallback2::Invoke(Mono.Security.X509.X509CertificateCollection)
extern "C"  ValidationResult_t925859732 * CertificateValidationCallback2_Invoke_m4228010672 (CertificateValidationCallback2_t3353735195 * __this, X509CertificateCollection_t4135795358 * ___collection0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult Mono.Security.Protocol.Tls.CertificateValidationCallback2::BeginInvoke(Mono.Security.X509.X509CertificateCollection,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * CertificateValidationCallback2_BeginInvoke_m1231864174 (CertificateValidationCallback2_t3353735195 * __this, X509CertificateCollection_t4135795358 * ___collection0, AsyncCallback_t1369114871 * ___callback1, Il2CppObject * ___object2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.ValidationResult Mono.Security.Protocol.Tls.CertificateValidationCallback2::EndInvoke(System.IAsyncResult)
extern "C"  ValidationResult_t925859732 * CertificateValidationCallback2_EndInvoke_m2684174416 (CertificateValidationCallback2_t3353735195 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
