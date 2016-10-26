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

// System.Text.RegularExpressions.Syntax.PositionAssertion
struct PositionAssertion_t3788287627;
// System.Text.RegularExpressions.ICompiler
struct ICompiler_t2056384438;
// System.Text.RegularExpressions.Syntax.AnchorInfo
struct AnchorInfo_t3681078449;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Text_RegularExpressions_Position2659647281.h"

// System.Void System.Text.RegularExpressions.Syntax.PositionAssertion::.ctor(System.Text.RegularExpressions.Position)
extern "C"  void PositionAssertion__ctor_m2712509165 (PositionAssertion_t3788287627 * __this, uint16_t ___pos0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.PositionAssertion::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
extern "C"  void PositionAssertion_Compile_m2491919992 (PositionAssertion_t3788287627 * __this, Il2CppObject * ___cmp0, bool ___reverse1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.PositionAssertion::GetWidth(System.Int32&,System.Int32&)
extern "C"  void PositionAssertion_GetWidth_m4112110283 (PositionAssertion_t3788287627 * __this, int32_t* ___min0, int32_t* ___max1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Syntax.PositionAssertion::IsComplex()
extern "C"  bool PositionAssertion_IsComplex_m2141947785 (PositionAssertion_t3788287627 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Syntax.AnchorInfo System.Text.RegularExpressions.Syntax.PositionAssertion::GetAnchorInfo(System.Boolean)
extern "C"  AnchorInfo_t3681078449 * PositionAssertion_GetAnchorInfo_m3911354203 (PositionAssertion_t3788287627 * __this, bool ___revers0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
