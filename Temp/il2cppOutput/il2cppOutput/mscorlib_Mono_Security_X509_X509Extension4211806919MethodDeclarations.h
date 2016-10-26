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
struct X509Extension_t4211806919;
// Mono.Security.ASN1
struct ASN1_t3752917377;
// System.Object
struct Il2CppObject;
// System.Text.StringBuilder
struct StringBuilder_t243639308;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_Mono_Security_ASN13752917377.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_Text_StringBuilder243639308.h"

// System.Void Mono.Security.X509.X509Extension::.ctor(Mono.Security.ASN1)
extern "C"  void X509Extension__ctor_m1503753254 (X509Extension_t4211806919 * __this, ASN1_t3752917377 * ___asn10, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Extension::Decode()
extern "C"  void X509Extension_Decode_m2024676052 (X509Extension_t4211806919 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Extension::Equals(System.Object)
extern "C"  bool X509Extension_Equals_m2581060621 (X509Extension_t4211806919 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.X509.X509Extension::GetHashCode()
extern "C"  int32_t X509Extension_GetHashCode_m3467310705 (X509Extension_t4211806919 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Extension::WriteLine(System.Text.StringBuilder,System.Int32,System.Int32)
extern "C"  void X509Extension_WriteLine_m3127227707 (X509Extension_t4211806919 * __this, StringBuilder_t243639308 * ___sb0, int32_t ___n1, int32_t ___pos2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Extension::ToString()
extern "C"  String_t* X509Extension_ToString_m633627125 (X509Extension_t4211806919 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
