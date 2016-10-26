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

// System.UriParser
struct UriParser_t3685110593;
// System.Uri
struct Uri_t1116831938;
// System.UriFormatException
struct UriFormatException_t308538560;
// System.String
struct String_t;
// System.Collections.Hashtable
struct Hashtable_t1407064410;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Uri1116831938.h"
#include "System_System_UriFormatException308538560.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Collections_Hashtable1407064410.h"
#include "System_System_UriParser3685110593.h"

// System.Void System.UriParser::.ctor()
extern "C"  void UriParser__ctor_m3933763184 (UriParser_t3685110593 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UriParser::.cctor()
extern "C"  void UriParser__cctor_m1205478205 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UriParser::InitializeAndValidate(System.Uri,System.UriFormatException&)
extern "C"  void UriParser_InitializeAndValidate_m3968058349 (UriParser_t3685110593 * __this, Uri_t1116831938 * ___uri0, UriFormatException_t308538560 ** ___parsingError1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UriParser::OnRegister(System.String,System.Int32)
extern "C"  void UriParser_OnRegister_m3986311499 (UriParser_t3685110593 * __this, String_t* ___schemeName0, int32_t ___defaultPort1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UriParser::set_SchemeName(System.String)
extern "C"  void UriParser_set_SchemeName_m706252033 (UriParser_t3685110593 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.UriParser::get_DefaultPort()
extern "C"  int32_t UriParser_get_DefaultPort_m3728184791 (UriParser_t3685110593 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UriParser::set_DefaultPort(System.Int32)
extern "C"  void UriParser_set_DefaultPort_m1019606244 (UriParser_t3685110593 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UriParser::CreateDefaults()
extern "C"  void UriParser_CreateDefaults_m2648397058 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UriParser::InternalRegister(System.Collections.Hashtable,System.UriParser,System.String,System.Int32)
extern "C"  void UriParser_InternalRegister_m1447570189 (Il2CppObject * __this /* static, unused */, Hashtable_t1407064410 * ___table0, UriParser_t3685110593 * ___uriParser1, String_t* ___schemeName2, int32_t ___defaultPort3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UriParser System.UriParser::GetParser(System.String)
extern "C"  UriParser_t3685110593 * UriParser_GetParser_m635613298 (Il2CppObject * __this /* static, unused */, String_t* ___schemeName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
