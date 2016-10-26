#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GUIStyle
struct GUIStyle_t2990928826;
// UnityEngine.Texture2D
struct Texture2D_t3884108195;
struct GUIStyle_t2990928826_marshaled_pinvoke;
struct GUIStyle_t2990928826_marshaled_com;

#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUIStyleState
struct  GUIStyleState_t1997423985  : public Il2CppObject
{
public:
	// System.IntPtr UnityEngine.GUIStyleState::m_Ptr
	IntPtr_t ___m_Ptr_0;
	// UnityEngine.GUIStyle UnityEngine.GUIStyleState::m_SourceStyle
	GUIStyle_t2990928826 * ___m_SourceStyle_1;
	// UnityEngine.Texture2D UnityEngine.GUIStyleState::m_Background
	Texture2D_t3884108195 * ___m_Background_2;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(GUIStyleState_t1997423985, ___m_Ptr_0)); }
	inline IntPtr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline IntPtr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(IntPtr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_SourceStyle_1() { return static_cast<int32_t>(offsetof(GUIStyleState_t1997423985, ___m_SourceStyle_1)); }
	inline GUIStyle_t2990928826 * get_m_SourceStyle_1() const { return ___m_SourceStyle_1; }
	inline GUIStyle_t2990928826 ** get_address_of_m_SourceStyle_1() { return &___m_SourceStyle_1; }
	inline void set_m_SourceStyle_1(GUIStyle_t2990928826 * value)
	{
		___m_SourceStyle_1 = value;
		Il2CppCodeGenWriteBarrier(&___m_SourceStyle_1, value);
	}

	inline static int32_t get_offset_of_m_Background_2() { return static_cast<int32_t>(offsetof(GUIStyleState_t1997423985, ___m_Background_2)); }
	inline Texture2D_t3884108195 * get_m_Background_2() const { return ___m_Background_2; }
	inline Texture2D_t3884108195 ** get_address_of_m_Background_2() { return &___m_Background_2; }
	inline void set_m_Background_2(Texture2D_t3884108195 * value)
	{
		___m_Background_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_Background_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: UnityEngine.GUIStyleState
struct GUIStyleState_t1997423985_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	GUIStyle_t2990928826_marshaled_pinvoke* ___m_SourceStyle_1;
	Texture2D_t3884108195 * ___m_Background_2;
};
// Native definition for marshalling of: UnityEngine.GUIStyleState
struct GUIStyleState_t1997423985_marshaled_com
{
	intptr_t ___m_Ptr_0;
	GUIStyle_t2990928826_marshaled_com* ___m_SourceStyle_1;
	Texture2D_t3884108195 * ___m_Background_2;
};
