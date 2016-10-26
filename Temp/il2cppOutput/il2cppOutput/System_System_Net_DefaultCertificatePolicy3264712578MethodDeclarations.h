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

// System.Net.DefaultCertificatePolicy
struct DefaultCertificatePolicy_t3264712578;
// System.Net.ServicePoint
struct ServicePoint_t4193060341;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t3076817455;
// System.Net.WebRequest
struct WebRequest_t51806901;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_ServicePoint4193060341.h"
#include "mscorlib_System_Security_Cryptography_X509Certific3076817455.h"
#include "System_System_Net_WebRequest51806901.h"

// System.Void System.Net.DefaultCertificatePolicy::.ctor()
extern "C"  void DefaultCertificatePolicy__ctor_m4248919730 (DefaultCertificatePolicy_t3264712578 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.DefaultCertificatePolicy::CheckValidationResult(System.Net.ServicePoint,System.Security.Cryptography.X509Certificates.X509Certificate,System.Net.WebRequest,System.Int32)
extern "C"  bool DefaultCertificatePolicy_CheckValidationResult_m4124026463 (DefaultCertificatePolicy_t3264712578 * __this, ServicePoint_t4193060341 * ___point0, X509Certificate_t3076817455 * ___certificate1, WebRequest_t51806901 * ___request2, int32_t ___certificateProblem3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
