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

// Mono.Security.X509.X509Extension
struct X509Extension_t4211806920;
// Mono.Security.ASN1
struct ASN1_t3752917378;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// System.Text.StringBuilder
struct StringBuilder_t243639308;

#include "codegen/il2cpp-codegen.h"
#include "Mono_Security_Mono_Security_ASN13752917377.h"
#include "Mono_Security_Mono_Security_X509_X509Extension4211806919.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_Text_StringBuilder243639308.h"

// System.Void Mono.Security.X509.X509Extension::.ctor(Mono.Security.ASN1)
extern "C"  void X509Extension__ctor_m2888521900 (X509Extension_t4211806920 * __this, ASN1_t3752917378 * ___asn10, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Extension::.ctor(Mono.Security.X509.X509Extension)
extern "C"  void X509Extension__ctor_m3298017424 (X509Extension_t4211806920 * __this, X509Extension_t4211806920 * ___extension0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Extension::Decode()
extern "C"  void X509Extension_Decode_m4266869134 (X509Extension_t4211806920 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Extension::Encode()
extern "C"  void X509Extension_Encode_m1112310710 (X509Extension_t4211806920 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Extension::get_Oid()
extern "C"  String_t* X509Extension_get_Oid_m1309247492 (X509Extension_t4211806920 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Extension::get_Critical()
extern "C"  bool X509Extension_get_Critical_m3010458874 (X509Extension_t4211806920 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.ASN1 Mono.Security.X509.X509Extension::get_Value()
extern "C"  ASN1_t3752917378 * X509Extension_get_Value_m1722264871 (X509Extension_t4211806920 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Extension::Equals(System.Object)
extern "C"  bool X509Extension_Equals_m131878599 (X509Extension_t4211806920 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.X509.X509Extension::GetHashCode()
extern "C"  int32_t X509Extension_GetHashCode_m1621273003 (X509Extension_t4211806920 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Extension::WriteLine(System.Text.StringBuilder,System.Int32,System.Int32)
extern "C"  void X509Extension_WriteLine_m4265102453 (X509Extension_t4211806920 * __this, StringBuilder_t243639308 * ___sb0, int32_t ___n1, int32_t ___pos2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Extension::ToString()
extern "C"  String_t* X509Extension_ToString_m1923324847 (X509Extension_t4211806920 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
