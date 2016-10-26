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

// System.Net.FtpWebRequest
struct FtpWebRequest_t3084461655;
// System.Uri
struct Uri_t1116831938;
// System.Object
struct Il2CppObject;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t3076817455;
// System.Security.Cryptography.X509Certificates.X509Chain
struct X509Chain_t1111884825;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Uri1116831938.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_Security_Cryptography_X509Certific3076817455.h"
#include "System_System_Security_Cryptography_X509Certificat1111884825.h"
#include "System_System_Net_Security_SslPolicyErrors3099591579.h"

// System.Void System.Net.FtpWebRequest::.ctor(System.Uri)
extern "C"  void FtpWebRequest__ctor_m3137933378 (FtpWebRequest_t3084461655 * __this, Uri_t1116831938 * ___uri0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebRequest::.cctor()
extern "C"  void FtpWebRequest__cctor_m2914795070 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.FtpWebRequest::<callback>m__B(System.Object,System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509Chain,System.Net.Security.SslPolicyErrors)
extern "C"  bool FtpWebRequest_U3CcallbackU3Em__B_m1388175350 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___sender0, X509Certificate_t3076817455 * ___certificate1, X509Chain_t1111884825 * ___chain2, int32_t ___sslPolicyErrors3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
