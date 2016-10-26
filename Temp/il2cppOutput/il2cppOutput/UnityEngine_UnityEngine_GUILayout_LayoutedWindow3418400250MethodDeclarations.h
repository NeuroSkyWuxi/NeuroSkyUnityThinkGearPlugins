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

// UnityEngine.GUILayout/LayoutedWindow
struct LayoutedWindow_t3418400250;
// UnityEngine.GUI/WindowFunction
struct WindowFunction_t2749288659;
// UnityEngine.GUIContent
struct GUIContent_t2094828418;
// UnityEngine.GUILayoutOption[]
struct GUILayoutOptionU5BU5D_t2977405297;
// UnityEngine.GUIStyle
struct GUIStyle_t2990928826;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_GUI_WindowFunction2749288659.h"
#include "UnityEngine_UnityEngine_Rect4241904616.h"
#include "UnityEngine_UnityEngine_GUIContent2094828418.h"
#include "UnityEngine_UnityEngine_GUIStyle2990928826.h"

// System.Void UnityEngine.GUILayout/LayoutedWindow::.ctor(UnityEngine.GUI/WindowFunction,UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.GUILayoutOption[],UnityEngine.GUIStyle)
extern "C"  void LayoutedWindow__ctor_m70994485 (LayoutedWindow_t3418400250 * __this, WindowFunction_t2749288659 * ___f0, Rect_t4241904616  ___screenRect1, GUIContent_t2094828418 * ___content2, GUILayoutOptionU5BU5D_t2977405297* ___options3, GUIStyle_t2990928826 * ___style4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout/LayoutedWindow::DoWindow(System.Int32)
extern "C"  void LayoutedWindow_DoWindow_m1441924070 (LayoutedWindow_t3418400250 * __this, int32_t ___windowID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
