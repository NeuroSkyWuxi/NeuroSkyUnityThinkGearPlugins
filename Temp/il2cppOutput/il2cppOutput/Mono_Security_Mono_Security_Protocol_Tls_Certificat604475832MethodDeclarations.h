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

// Mono.Security.Protocol.Tls.CertificateSelectionCallback
struct CertificateSelectionCallback_t604475832;
// System.Object
struct Il2CppObject;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t3076817455;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t3220522733;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "System_System_Security_Cryptography_X509Certificat3220522733.h"
#include "mscorlib_System_Security_Cryptography_X509Certific3076817455.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void Mono.Security.Protocol.Tls.CertificateSelectionCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void CertificateSelectionCallback__ctor_m2794002132 (CertificateSelectionCallback_t604475832 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.CertificateSelectionCallback::Invoke(System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection)
extern "C"  X509Certificate_t3076817455 * CertificateSelectionCallback_Invoke_m1413516687 (CertificateSelectionCallback_t604475832 * __this, X509CertificateCollection_t3220522733 * ___clientCertificates0, X509Certificate_t3076817455 * ___serverCertificate1, String_t* ___targetHost2, X509CertificateCollection_t3220522733 * ___serverRequestedCertificates3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult Mono.Security.Protocol.Tls.CertificateSelectionCallback::BeginInvoke(System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * CertificateSelectionCallback_BeginInvoke_m1304521025 (CertificateSelectionCallback_t604475832 * __this, X509CertificateCollection_t3220522733 * ___clientCertificates0, X509Certificate_t3076817455 * ___serverCertificate1, String_t* ___targetHost2, X509CertificateCollection_t3220522733 * ___serverRequestedCertificates3, AsyncCallback_t1369114871 * ___callback4, Il2CppObject * ___object5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.CertificateSelectionCallback::EndInvoke(System.IAsyncResult)
extern "C"  X509Certificate_t3076817455 * CertificateSelectionCallback_EndInvoke_m3027480361 (CertificateSelectionCallback_t604475832 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
