#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Texture2D[]
struct Texture2DU5BU5D_t2376705138;
// ThinkGearController
struct ThinkGearController_t2070330365;
// System.Collections.ArrayList
struct ArrayList_t3948406897;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"
#include "UnityEngine_UnityEngine_Rect4241904616.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DisplayData
struct  DisplayData_t3381719916  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Texture2D[] DisplayData::signalIcons
	Texture2DU5BU5D_t2376705138* ___signalIcons_2;
	// System.Single DisplayData::indexSignalIcons
	float ___indexSignalIcons_3;
	// System.Boolean DisplayData::enableAnimation
	bool ___enableAnimation_4;
	// System.Single DisplayData::animationInterval
	float ___animationInterval_5;
	// ThinkGearController DisplayData::controller
	ThinkGearController_t2070330365 * ___controller_6;
	// System.Int32 DisplayData::Raw
	int32_t ___Raw_7;
	// System.Int32 DisplayData::PoorSignal
	int32_t ___PoorSignal_8;
	// System.Int32 DisplayData::Attention
	int32_t ___Attention_9;
	// System.Int32 DisplayData::Meditation
	int32_t ___Meditation_10;
	// System.Int32 DisplayData::Blink
	int32_t ___Blink_11;
	// System.Single DisplayData::Delta
	float ___Delta_12;
	// System.Single DisplayData::Theta
	float ___Theta_13;
	// System.Single DisplayData::LowAlpha
	float ___LowAlpha_14;
	// System.Single DisplayData::HighAlpha
	float ___HighAlpha_15;
	// System.Single DisplayData::LowBeta
	float ___LowBeta_16;
	// System.Single DisplayData::HighBeta
	float ___HighBeta_17;
	// System.Single DisplayData::LowGamma
	float ___LowGamma_18;
	// System.Single DisplayData::HighGamma
	float ___HighGamma_19;
	// System.Boolean DisplayData::showListViewFlag
	bool ___showListViewFlag_20;
	// System.Collections.ArrayList DisplayData::deviceList
	ArrayList_t3948406897 * ___deviceList_21;
	// System.Collections.ArrayList DisplayData::displayedStrArr
	ArrayList_t3948406897 * ___displayedStrArr_22;
	// UnityEngine.Vector2 DisplayData::scrollPosition
	Vector2_t4282066565  ___scrollPosition_23;
	// UnityEngine.Rect DisplayData::windowRect
	Rect_t4241904616  ___windowRect_24;
	// System.Single DisplayData::rectX
	float ___rectX_25;
	// System.Single DisplayData::rectY
	float ___rectY_26;
	// System.Single DisplayData::rectWidth
	float ___rectWidth_27;
	// System.Single DisplayData::rectHeight
	float ___rectHeight_28;

public:
	inline static int32_t get_offset_of_signalIcons_2() { return static_cast<int32_t>(offsetof(DisplayData_t3381719916, ___signalIcons_2)); }
	inline Texture2DU5BU5D_t2376705138* get_signalIcons_2() const { return ___signalIcons_2; }
	inline Texture2DU5BU5D_t2376705138** get_address_of_signalIcons_2() { return &___signalIcons_2; }
	inline void set_signalIcons_2(Texture2DU5BU5D_t2376705138* value)
	{
		___signalIcons_2 = value;
		Il2CppCodeGenWriteBarrier(&___signalIcons_2, value);
	}

	inline static int32_t get_offset_of_indexSignalIcons_3() { return static_cast<int32_t>(offsetof(DisplayData_t3381719916, ___indexSignalIcons_3)); }
	inline float get_indexSignalIcons_3() const { return ___indexSignalIcons_3; }
	inline float* get_address_of_indexSignalIcons_3() { return &___indexSignalIcons_3; }
	inline void set_indexSignalIcons_3(float value)
	{
		___indexSignalIcons_3 = value;
	}

	inline static int32_t get_offset_of_enableAnimation_4() { return static_cast<int32_t>(offsetof(DisplayData_t3381719916, ___enableAnimation_4)); }
	inline bool get_enableAnimation_4() const { return ___enableAnimation_4; }
	inline bool* get_address_of_enableAnimation_4() { return &___enableAnimation_4; }
	inline void set_enableAnimation_4(bool value)
	{
		___enableAnimation_4 = value;
	}

	inline static int32_t get_offset_of_animationInterval_5() { return static_cast<int32_t>(offsetof(DisplayData_t3381719916, ___animationInterval_5)); }
	inline float get_animationInterval_5() const { return ___animationInterval_5; }
	inline float* get_address_of_animationInterval_5() { return &___animationInterval_5; }
	inline void set_animationInterval_5(float value)
	{
		___animationInterval_5 = value;
	}

	inline static int32_t get_offset_of_controller_6() { return static_cast<int32_t>(offsetof(DisplayData_t3381719916, ___controller_6)); }
	inline ThinkGearController_t2070330365 * get_controller_6() const { return ___controller_6; }
	inline ThinkGearController_t2070330365 ** get_address_of_controller_6() { return &___controller_6; }
	inline void set_controller_6(ThinkGearController_t2070330365 * value)
	{
		___controller_6 = value;
		Il2CppCodeGenWriteBarrier(&___controller_6, value);
	}

	inline static int32_t get_offset_of_Raw_7() { return static_cast<int32_t>(offsetof(DisplayData_t3381719916, ___Raw_7)); }
	inline int32_t get_Raw_7() const { return ___Raw_7; }
	inline int32_t* get_address_of_Raw_7() { return &___Raw_7; }
	inline void set_Raw_7(int32_t value)
	{
		___Raw_7 = value;
	}

	inline static int32_t get_offset_of_PoorSignal_8() { return static_cast<int32_t>(offsetof(DisplayData_t3381719916, ___PoorSignal_8)); }
	inline int32_t get_PoorSignal_8() const { return ___PoorSignal_8; }
	inline int32_t* get_address_of_PoorSignal_8() { return &___PoorSignal_8; }
	inline void set_PoorSignal_8(int32_t value)
	{
		___PoorSignal_8 = value;
	}

	inline static int32_t get_offset_of_Attention_9() { return static_cast<int32_t>(offsetof(DisplayData_t3381719916, ___Attention_9)); }
	inline int32_t get_Attention_9() const { return ___Attention_9; }
	inline int32_t* get_address_of_Attention_9() { return &___Attention_9; }
	inline void set_Attention_9(int32_t value)
	{
		___Attention_9 = value;
	}

	inline static int32_t get_offset_of_Meditation_10() { return static_cast<int32_t>(offsetof(DisplayData_t3381719916, ___Meditation_10)); }
	inline int32_t get_Meditation_10() const { return ___Meditation_10; }
	inline int32_t* get_address_of_Meditation_10() { return &___Meditation_10; }
	inline void set_Meditation_10(int32_t value)
	{
		___Meditation_10 = value;
	}

	inline static int32_t get_offset_of_Blink_11() { return static_cast<int32_t>(offsetof(DisplayData_t3381719916, ___Blink_11)); }
	inline int32_t get_Blink_11() const { return ___Blink_11; }
	inline int32_t* get_address_of_Blink_11() { return &___Blink_11; }
	inline void set_Blink_11(int32_t value)
	{
		___Blink_11 = value;
	}

	inline static int32_t get_offset_of_Delta_12() { return static_cast<int32_t>(offsetof(DisplayData_t3381719916, ___Delta_12)); }
	inline float get_Delta_12() const { return ___Delta_12; }
	inline float* get_address_of_Delta_12() { return &___Delta_12; }
	inline void set_Delta_12(float value)
	{
		___Delta_12 = value;
	}

	inline static int32_t get_offset_of_Theta_13() { return static_cast<int32_t>(offsetof(DisplayData_t3381719916, ___Theta_13)); }
	inline float get_Theta_13() const { return ___Theta_13; }
	inline float* get_address_of_Theta_13() { return &___Theta_13; }
	inline void set_Theta_13(float value)
	{
		___Theta_13 = value;
	}

	inline static int32_t get_offset_of_LowAlpha_14() { return static_cast<int32_t>(offsetof(DisplayData_t3381719916, ___LowAlpha_14)); }
	inline float get_LowAlpha_14() const { return ___LowAlpha_14; }
	inline float* get_address_of_LowAlpha_14() { return &___LowAlpha_14; }
	inline void set_LowAlpha_14(float value)
	{
		___LowAlpha_14 = value;
	}

	inline static int32_t get_offset_of_HighAlpha_15() { return static_cast<int32_t>(offsetof(DisplayData_t3381719916, ___HighAlpha_15)); }
	inline float get_HighAlpha_15() const { return ___HighAlpha_15; }
	inline float* get_address_of_HighAlpha_15() { return &___HighAlpha_15; }
	inline void set_HighAlpha_15(float value)
	{
		___HighAlpha_15 = value;
	}

	inline static int32_t get_offset_of_LowBeta_16() { return static_cast<int32_t>(offsetof(DisplayData_t3381719916, ___LowBeta_16)); }
	inline float get_LowBeta_16() const { return ___LowBeta_16; }
	inline float* get_address_of_LowBeta_16() { return &___LowBeta_16; }
	inline void set_LowBeta_16(float value)
	{
		___LowBeta_16 = value;
	}

	inline static int32_t get_offset_of_HighBeta_17() { return static_cast<int32_t>(offsetof(DisplayData_t3381719916, ___HighBeta_17)); }
	inline float get_HighBeta_17() const { return ___HighBeta_17; }
	inline float* get_address_of_HighBeta_17() { return &___HighBeta_17; }
	inline void set_HighBeta_17(float value)
	{
		___HighBeta_17 = value;
	}

	inline static int32_t get_offset_of_LowGamma_18() { return static_cast<int32_t>(offsetof(DisplayData_t3381719916, ___LowGamma_18)); }
	inline float get_LowGamma_18() const { return ___LowGamma_18; }
	inline float* get_address_of_LowGamma_18() { return &___LowGamma_18; }
	inline void set_LowGamma_18(float value)
	{
		___LowGamma_18 = value;
	}

	inline static int32_t get_offset_of_HighGamma_19() { return static_cast<int32_t>(offsetof(DisplayData_t3381719916, ___HighGamma_19)); }
	inline float get_HighGamma_19() const { return ___HighGamma_19; }
	inline float* get_address_of_HighGamma_19() { return &___HighGamma_19; }
	inline void set_HighGamma_19(float value)
	{
		___HighGamma_19 = value;
	}

	inline static int32_t get_offset_of_showListViewFlag_20() { return static_cast<int32_t>(offsetof(DisplayData_t3381719916, ___showListViewFlag_20)); }
	inline bool get_showListViewFlag_20() const { return ___showListViewFlag_20; }
	inline bool* get_address_of_showListViewFlag_20() { return &___showListViewFlag_20; }
	inline void set_showListViewFlag_20(bool value)
	{
		___showListViewFlag_20 = value;
	}

	inline static int32_t get_offset_of_deviceList_21() { return static_cast<int32_t>(offsetof(DisplayData_t3381719916, ___deviceList_21)); }
	inline ArrayList_t3948406897 * get_deviceList_21() const { return ___deviceList_21; }
	inline ArrayList_t3948406897 ** get_address_of_deviceList_21() { return &___deviceList_21; }
	inline void set_deviceList_21(ArrayList_t3948406897 * value)
	{
		___deviceList_21 = value;
		Il2CppCodeGenWriteBarrier(&___deviceList_21, value);
	}

	inline static int32_t get_offset_of_displayedStrArr_22() { return static_cast<int32_t>(offsetof(DisplayData_t3381719916, ___displayedStrArr_22)); }
	inline ArrayList_t3948406897 * get_displayedStrArr_22() const { return ___displayedStrArr_22; }
	inline ArrayList_t3948406897 ** get_address_of_displayedStrArr_22() { return &___displayedStrArr_22; }
	inline void set_displayedStrArr_22(ArrayList_t3948406897 * value)
	{
		___displayedStrArr_22 = value;
		Il2CppCodeGenWriteBarrier(&___displayedStrArr_22, value);
	}

	inline static int32_t get_offset_of_scrollPosition_23() { return static_cast<int32_t>(offsetof(DisplayData_t3381719916, ___scrollPosition_23)); }
	inline Vector2_t4282066565  get_scrollPosition_23() const { return ___scrollPosition_23; }
	inline Vector2_t4282066565 * get_address_of_scrollPosition_23() { return &___scrollPosition_23; }
	inline void set_scrollPosition_23(Vector2_t4282066565  value)
	{
		___scrollPosition_23 = value;
	}

	inline static int32_t get_offset_of_windowRect_24() { return static_cast<int32_t>(offsetof(DisplayData_t3381719916, ___windowRect_24)); }
	inline Rect_t4241904616  get_windowRect_24() const { return ___windowRect_24; }
	inline Rect_t4241904616 * get_address_of_windowRect_24() { return &___windowRect_24; }
	inline void set_windowRect_24(Rect_t4241904616  value)
	{
		___windowRect_24 = value;
	}

	inline static int32_t get_offset_of_rectX_25() { return static_cast<int32_t>(offsetof(DisplayData_t3381719916, ___rectX_25)); }
	inline float get_rectX_25() const { return ___rectX_25; }
	inline float* get_address_of_rectX_25() { return &___rectX_25; }
	inline void set_rectX_25(float value)
	{
		___rectX_25 = value;
	}

	inline static int32_t get_offset_of_rectY_26() { return static_cast<int32_t>(offsetof(DisplayData_t3381719916, ___rectY_26)); }
	inline float get_rectY_26() const { return ___rectY_26; }
	inline float* get_address_of_rectY_26() { return &___rectY_26; }
	inline void set_rectY_26(float value)
	{
		___rectY_26 = value;
	}

	inline static int32_t get_offset_of_rectWidth_27() { return static_cast<int32_t>(offsetof(DisplayData_t3381719916, ___rectWidth_27)); }
	inline float get_rectWidth_27() const { return ___rectWidth_27; }
	inline float* get_address_of_rectWidth_27() { return &___rectWidth_27; }
	inline void set_rectWidth_27(float value)
	{
		___rectWidth_27 = value;
	}

	inline static int32_t get_offset_of_rectHeight_28() { return static_cast<int32_t>(offsetof(DisplayData_t3381719916, ___rectHeight_28)); }
	inline float get_rectHeight_28() const { return ___rectHeight_28; }
	inline float* get_address_of_rectHeight_28() { return &___rectHeight_28; }
	inline void set_rectHeight_28(float value)
	{
		___rectHeight_28 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
