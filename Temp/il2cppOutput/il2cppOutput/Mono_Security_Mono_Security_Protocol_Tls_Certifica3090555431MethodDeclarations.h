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

// Mono.Security.Protocol.Tls.CertificateValidationCallback
struct CertificateValidationCallback_t3090555431;
// System.Object
struct Il2CppObject;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t3076817455;
// System.Int32[]
struct Int32U5BU5D_t3230847821;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_Security_Cryptography_X509Certific3076817455.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void Mono.Security.Protocol.Tls.CertificateValidationCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void CertificateValidationCallback__ctor_m2692809593 (CertificateValidationCallback_t3090555431 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.CertificateValidationCallback::Invoke(System.Security.Cryptography.X509Certificates.X509Certificate,System.Int32[])
extern "C"  bool CertificateValidationCallback_Invoke_m481730652 (CertificateValidationCallback_t3090555431 * __this, X509Certificate_t3076817455 * ___certificate0, Int32U5BU5D_t3230847821* ___certificateErrors1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult Mono.Security.Protocol.Tls.CertificateValidationCallback::BeginInvoke(System.Security.Cryptography.X509Certificates.X509Certificate,System.Int32[],System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * CertificateValidationCallback_BeginInvoke_m1580004723 (CertificateValidationCallback_t3090555431 * __this, X509Certificate_t3076817455 * ___certificate0, Int32U5BU5D_t3230847821* ___certificateErrors1, AsyncCallback_t1369114871 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.CertificateValidationCallback::EndInvoke(System.IAsyncResult)
extern "C"  bool CertificateValidationCallback_EndInvoke_m2267930199 (CertificateValidationCallback_t3090555431 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
