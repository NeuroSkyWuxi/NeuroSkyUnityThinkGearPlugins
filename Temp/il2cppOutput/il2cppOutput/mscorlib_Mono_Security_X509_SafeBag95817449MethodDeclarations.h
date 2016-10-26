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

// Mono.Security.X509.SafeBag
struct SafeBag_t95817449;
// System.String
struct String_t;
// Mono.Security.ASN1
struct ASN1_t3752917377;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_Mono_Security_ASN13752917377.h"

// System.Void Mono.Security.X509.SafeBag::.ctor(System.String,Mono.Security.ASN1)
extern "C"  void SafeBag__ctor_m1500172744 (SafeBag_t95817449 * __this, String_t* ___bagOID0, ASN1_t3752917377 * ___asn11, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.SafeBag::get_BagOID()
extern "C"  String_t* SafeBag_get_BagOID_m14265110 (SafeBag_t95817449 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.ASN1 Mono.Security.X509.SafeBag::get_ASN1()
extern "C"  ASN1_t3752917377 * SafeBag_get_ASN1_m1523235481 (SafeBag_t95817449 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
