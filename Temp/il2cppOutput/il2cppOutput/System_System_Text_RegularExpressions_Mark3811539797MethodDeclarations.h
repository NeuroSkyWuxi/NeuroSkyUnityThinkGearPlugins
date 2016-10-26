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

// System.Text.RegularExpressions.Mark
struct Mark_t3811539797;
struct Mark_t3811539797_marshaled_pinvoke;
struct Mark_t3811539797_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Text_RegularExpressions_Mark3811539797.h"

// System.Boolean System.Text.RegularExpressions.Mark::get_IsDefined()
extern "C"  bool Mark_get_IsDefined_m36891578 (Mark_t3811539797 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Mark::get_Index()
extern "C"  int32_t Mark_get_Index_m4214982375 (Mark_t3811539797 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Mark::get_Length()
extern "C"  int32_t Mark_get_Length_m3639380819 (Mark_t3811539797 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct Mark_t3811539797;
struct Mark_t3811539797_marshaled_pinvoke;

extern "C" void Mark_t3811539797_marshal_pinvoke(const Mark_t3811539797& unmarshaled, Mark_t3811539797_marshaled_pinvoke& marshaled);
extern "C" void Mark_t3811539797_marshal_pinvoke_back(const Mark_t3811539797_marshaled_pinvoke& marshaled, Mark_t3811539797& unmarshaled);
extern "C" void Mark_t3811539797_marshal_pinvoke_cleanup(Mark_t3811539797_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct Mark_t3811539797;
struct Mark_t3811539797_marshaled_com;

extern "C" void Mark_t3811539797_marshal_com(const Mark_t3811539797& unmarshaled, Mark_t3811539797_marshaled_com& marshaled);
extern "C" void Mark_t3811539797_marshal_com_back(const Mark_t3811539797_marshaled_com& marshaled, Mark_t3811539797& unmarshaled);
extern "C" void Mark_t3811539797_marshal_com_cleanup(Mark_t3811539797_marshaled_com& marshaled);
