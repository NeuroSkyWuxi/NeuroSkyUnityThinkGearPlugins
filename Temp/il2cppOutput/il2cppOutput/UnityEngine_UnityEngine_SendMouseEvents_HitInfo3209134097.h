#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t3674682005;
// UnityEngine.Camera
struct Camera_t2727095145;

#include "mscorlib_System_ValueType1744280289.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SendMouseEvents/HitInfo
struct  HitInfo_t3209134097 
{
public:
	// UnityEngine.GameObject UnityEngine.SendMouseEvents/HitInfo::target
	GameObject_t3674682005 * ___target_0;
	// UnityEngine.Camera UnityEngine.SendMouseEvents/HitInfo::camera
	Camera_t2727095145 * ___camera_1;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(HitInfo_t3209134097, ___target_0)); }
	inline GameObject_t3674682005 * get_target_0() const { return ___target_0; }
	inline GameObject_t3674682005 ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(GameObject_t3674682005 * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier(&___target_0, value);
	}

	inline static int32_t get_offset_of_camera_1() { return static_cast<int32_t>(offsetof(HitInfo_t3209134097, ___camera_1)); }
	inline Camera_t2727095145 * get_camera_1() const { return ___camera_1; }
	inline Camera_t2727095145 ** get_address_of_camera_1() { return &___camera_1; }
	inline void set_camera_1(Camera_t2727095145 * value)
	{
		___camera_1 = value;
		Il2CppCodeGenWriteBarrier(&___camera_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: UnityEngine.SendMouseEvents/HitInfo
struct HitInfo_t3209134097_marshaled_pinvoke
{
	GameObject_t3674682005 * ___target_0;
	Camera_t2727095145 * ___camera_1;
};
// Native definition for marshalling of: UnityEngine.SendMouseEvents/HitInfo
struct HitInfo_t3209134097_marshaled_com
{
	GameObject_t3674682005 * ___target_0;
	Camera_t2727095145 * ___camera_1;
};
