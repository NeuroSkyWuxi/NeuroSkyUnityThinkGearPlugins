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

// System.Text.RegularExpressions.Syntax.CaptureAssertion
struct CaptureAssertion_t3434259338;
// System.Text.RegularExpressions.Syntax.Literal
struct Literal_t2061497825;
// System.Text.RegularExpressions.Syntax.CapturingGroup
struct CapturingGroup_t2867563114;
// System.Text.RegularExpressions.ICompiler
struct ICompiler_t2056384438;
// System.Text.RegularExpressions.Syntax.ExpressionAssertion
struct ExpressionAssertion_t3534504316;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Text_RegularExpressions_Syntax_Liter2061497825.h"
#include "System_System_Text_RegularExpressions_Syntax_Captu2867563114.h"

// System.Void System.Text.RegularExpressions.Syntax.CaptureAssertion::.ctor(System.Text.RegularExpressions.Syntax.Literal)
extern "C"  void CaptureAssertion__ctor_m4132785567 (CaptureAssertion_t3434259338 * __this, Literal_t2061497825 * ___l0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.CaptureAssertion::set_CapturingGroup(System.Text.RegularExpressions.Syntax.CapturingGroup)
extern "C"  void CaptureAssertion_set_CapturingGroup_m1020834945 (CaptureAssertion_t3434259338 * __this, CapturingGroup_t2867563114 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Syntax.CaptureAssertion::Compile(System.Text.RegularExpressions.ICompiler,System.Boolean)
extern "C"  void CaptureAssertion_Compile_m922447973 (CaptureAssertion_t3434259338 * __this, Il2CppObject * ___cmp0, bool ___reverse1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Syntax.CaptureAssertion::IsComplex()
extern "C"  bool CaptureAssertion_IsComplex_m987845008 (CaptureAssertion_t3434259338 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Syntax.ExpressionAssertion System.Text.RegularExpressions.Syntax.CaptureAssertion::get_Alternate()
extern "C"  ExpressionAssertion_t3534504316 * CaptureAssertion_get_Alternate_m4248571978 (CaptureAssertion_t3434259338 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
