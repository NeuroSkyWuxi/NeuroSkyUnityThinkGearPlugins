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

// Mono.Security.ASN1
struct ASN1_t3752917378;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "Mono_Security_Mono_Security_ASN13752917377.h"
#include "mscorlib_System_DateTime4283661327.h"

// Mono.Security.ASN1 Mono.Security.ASN1Convert::FromInt32(System.Int32)
extern "C"  ASN1_t3752917378 * ASN1Convert_FromInt32_m570537577 (Il2CppObject * __this /* static, unused */, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.ASN1 Mono.Security.ASN1Convert::FromOid(System.String)
extern "C"  ASN1_t3752917378 * ASN1Convert_FromOid_m1663059922 (Il2CppObject * __this /* static, unused */, String_t* ___oid0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.ASN1Convert::ToInt32(Mono.Security.ASN1)
extern "C"  int32_t ASN1Convert_ToInt32_m2275332600 (Il2CppObject * __this /* static, unused */, ASN1_t3752917378 * ___asn10, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.ASN1Convert::ToOid(Mono.Security.ASN1)
extern "C"  String_t* ASN1Convert_ToOid_m581448231 (Il2CppObject * __this /* static, unused */, ASN1_t3752917378 * ___asn10, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Mono.Security.ASN1Convert::ToDateTime(Mono.Security.ASN1)
extern "C"  DateTime_t4283661327  ASN1Convert_ToDateTime_m864003254 (Il2CppObject * __this /* static, unused */, ASN1_t3752917378 * ___time0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
