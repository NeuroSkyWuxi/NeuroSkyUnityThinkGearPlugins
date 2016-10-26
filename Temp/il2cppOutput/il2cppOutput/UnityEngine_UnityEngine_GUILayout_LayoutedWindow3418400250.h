#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GUI/WindowFunction
struct WindowFunction_t2749288659;
// UnityEngine.GUILayoutOption[]
struct GUILayoutOptionU5BU5D_t2977405297;
// UnityEngine.GUIStyle
struct GUIStyle_t2990928826;

#include "mscorlib_System_Object4170816371.h"
#include "UnityEngine_UnityEngine_Rect4241904616.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUILayout/LayoutedWindow
struct  LayoutedWindow_t3418400250  : public Il2CppObject
{
public:
	// UnityEngine.GUI/WindowFunction UnityEngine.GUILayout/LayoutedWindow::m_Func
	WindowFunction_t2749288659 * ___m_Func_0;
	// UnityEngine.Rect UnityEngine.GUILayout/LayoutedWindow::m_ScreenRect
	Rect_t4241904616  ___m_ScreenRect_1;
	// UnityEngine.GUILayoutOption[] UnityEngine.GUILayout/LayoutedWindow::m_Options
	GUILayoutOptionU5BU5D_t2977405297* ___m_Options_2;
	// UnityEngine.GUIStyle UnityEngine.GUILayout/LayoutedWindow::m_Style
	GUIStyle_t2990928826 * ___m_Style_3;

public:
	inline static int32_t get_offset_of_m_Func_0() { return static_cast<int32_t>(offsetof(LayoutedWindow_t3418400250, ___m_Func_0)); }
	inline WindowFunction_t2749288659 * get_m_Func_0() const { return ___m_Func_0; }
	inline WindowFunction_t2749288659 ** get_address_of_m_Func_0() { return &___m_Func_0; }
	inline void set_m_Func_0(WindowFunction_t2749288659 * value)
	{
		___m_Func_0 = value;
		Il2CppCodeGenWriteBarrier(&___m_Func_0, value);
	}

	inline static int32_t get_offset_of_m_ScreenRect_1() { return static_cast<int32_t>(offsetof(LayoutedWindow_t3418400250, ___m_ScreenRect_1)); }
	inline Rect_t4241904616  get_m_ScreenRect_1() const { return ___m_ScreenRect_1; }
	inline Rect_t4241904616 * get_address_of_m_ScreenRect_1() { return &___m_ScreenRect_1; }
	inline void set_m_ScreenRect_1(Rect_t4241904616  value)
	{
		___m_ScreenRect_1 = value;
	}

	inline static int32_t get_offset_of_m_Options_2() { return static_cast<int32_t>(offsetof(LayoutedWindow_t3418400250, ___m_Options_2)); }
	inline GUILayoutOptionU5BU5D_t2977405297* get_m_Options_2() const { return ___m_Options_2; }
	inline GUILayoutOptionU5BU5D_t2977405297** get_address_of_m_Options_2() { return &___m_Options_2; }
	inline void set_m_Options_2(GUILayoutOptionU5BU5D_t2977405297* value)
	{
		___m_Options_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_Options_2, value);
	}

	inline static int32_t get_offset_of_m_Style_3() { return static_cast<int32_t>(offsetof(LayoutedWindow_t3418400250, ___m_Style_3)); }
	inline GUIStyle_t2990928826 * get_m_Style_3() const { return ___m_Style_3; }
	inline GUIStyle_t2990928826 ** get_address_of_m_Style_3() { return &___m_Style_3; }
	inline void set_m_Style_3(GUIStyle_t2990928826 * value)
	{
		___m_Style_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_Style_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
