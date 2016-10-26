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

// System.Text.RegularExpressions.Match
struct Match_t2156507859;
// System.Text.RegularExpressions.Regex
struct Regex_t2161232213;
// System.Text.RegularExpressions.IMachine
struct IMachine_t2713299366;
// System.String
struct String_t;
// System.Text.RegularExpressions.GroupCollection
struct GroupCollection_t982584267;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Text_RegularExpressions_Regex2161232213.h"
#include "mscorlib_System_String7231557.h"

// System.Void System.Text.RegularExpressions.Match::.ctor()
extern "C"  void Match__ctor_m4051317828 (Match_t2156507859 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Match::.ctor(System.Text.RegularExpressions.Regex,System.Text.RegularExpressions.IMachine,System.String,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void Match__ctor_m798974407 (Match_t2156507859 * __this, Regex_t2161232213 * ___regex0, Il2CppObject * ___machine1, String_t* ___text2, int32_t ___text_length3, int32_t ___n_groups4, int32_t ___index5, int32_t ___length6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Match::.ctor(System.Text.RegularExpressions.Regex,System.Text.RegularExpressions.IMachine,System.String,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void Match__ctor_m4138800752 (Match_t2156507859 * __this, Regex_t2161232213 * ___regex0, Il2CppObject * ___machine1, String_t* ___text2, int32_t ___text_length3, int32_t ___n_groups4, int32_t ___index5, int32_t ___length6, int32_t ___n_caps7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Match::.cctor()
extern "C"  void Match__cctor_m554704873 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Match System.Text.RegularExpressions.Match::get_Empty()
extern "C"  Match_t2156507859 * Match_get_Empty_m170222943 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.GroupCollection System.Text.RegularExpressions.Match::get_Groups()
extern "C"  GroupCollection_t982584267 * Match_get_Groups_m445730348 (Match_t2156507859 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Match System.Text.RegularExpressions.Match::NextMatch()
extern "C"  Match_t2156507859 * Match_NextMatch_m3913445709 (Match_t2156507859 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Regex System.Text.RegularExpressions.Match::get_Regex()
extern "C"  Regex_t2161232213 * Match_get_Regex_m1260760027 (Match_t2156507859 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
