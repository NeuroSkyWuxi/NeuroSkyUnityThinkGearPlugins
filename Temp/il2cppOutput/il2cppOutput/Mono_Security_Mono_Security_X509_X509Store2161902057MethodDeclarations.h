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

// Mono.Security.X509.X509Store
struct X509Store_t2161902057;
// System.String
struct String_t;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t4135795358;
// System.Collections.ArrayList
struct ArrayList_t3948406897;
// System.Byte[]
struct ByteU5BU5D_t4260760469;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t1623369440;
// Mono.Security.X509.X509Crl
struct X509Crl_t3222473765;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"

// System.Void Mono.Security.X509.X509Store::.ctor(System.String,System.Boolean)
extern "C"  void X509Store__ctor_m3740673213 (X509Store_t2161902057 * __this, String_t* ___path0, bool ___crl1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.X509Store::get_Certificates()
extern "C"  X509CertificateCollection_t4135795358 * X509Store_get_Certificates_m3817753304 (X509Store_t2161902057 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList Mono.Security.X509.X509Store::get_Crls()
extern "C"  ArrayList_t3948406897 * X509Store_get_Crls_m2221659197 (X509Store_t2161902057 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Store::Load(System.String)
extern "C"  ByteU5BU5D_t4260760469* X509Store_Load_m507057712 (X509Store_t2161902057 * __this, String_t* ___filename0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Certificate Mono.Security.X509.X509Store::LoadCertificate(System.String)
extern "C"  X509Certificate_t1623369440 * X509Store_LoadCertificate_m2281266908 (X509Store_t2161902057 * __this, String_t* ___filename0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Crl Mono.Security.X509.X509Store::LoadCrl(System.String)
extern "C"  X509Crl_t3222473765 * X509Store_LoadCrl_m371472464 (X509Store_t2161902057 * __this, String_t* ___filename0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Store::CheckStore(System.String,System.Boolean)
extern "C"  bool X509Store_CheckStore_m4197144772 (X509Store_t2161902057 * __this, String_t* ___path0, bool ___throwException1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.X509Store::BuildCertificatesCollection(System.String)
extern "C"  X509CertificateCollection_t4135795358 * X509Store_BuildCertificatesCollection_m1851273927 (X509Store_t2161902057 * __this, String_t* ___storeName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList Mono.Security.X509.X509Store::BuildCrlsCollection(System.String)
extern "C"  ArrayList_t3948406897 * X509Store_BuildCrlsCollection_m2551806712 (X509Store_t2161902057 * __this, String_t* ___storeName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
