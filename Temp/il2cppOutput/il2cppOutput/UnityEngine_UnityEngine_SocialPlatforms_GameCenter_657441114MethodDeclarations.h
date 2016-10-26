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

// UnityEngine.SocialPlatforms.Impl.UserProfile
struct UserProfile_t2280656072;
// UnityEngine.SocialPlatforms.Impl.UserProfile[]
struct UserProfileU5BU5D_t2378268441;
// UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData
struct GcUserProfileData_t657441114;
struct GcUserProfileData_t657441114_marshaled_pinvoke;
struct GcUserProfileData_t657441114_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter_657441114.h"

// UnityEngine.SocialPlatforms.Impl.UserProfile UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData::ToUserProfile()
extern "C"  UserProfile_t2280656072 * GcUserProfileData_ToUserProfile_m1509702721 (GcUserProfileData_t657441114 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData::AddToArray(UnityEngine.SocialPlatforms.Impl.UserProfile[]&,System.Int32)
extern "C"  void GcUserProfileData_AddToArray_m3757655355 (GcUserProfileData_t657441114 * __this, UserProfileU5BU5D_t2378268441** ___array0, int32_t ___number1, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct GcUserProfileData_t657441114;
struct GcUserProfileData_t657441114_marshaled_pinvoke;

extern "C" void GcUserProfileData_t657441114_marshal_pinvoke(const GcUserProfileData_t657441114& unmarshaled, GcUserProfileData_t657441114_marshaled_pinvoke& marshaled);
extern "C" void GcUserProfileData_t657441114_marshal_pinvoke_back(const GcUserProfileData_t657441114_marshaled_pinvoke& marshaled, GcUserProfileData_t657441114& unmarshaled);
extern "C" void GcUserProfileData_t657441114_marshal_pinvoke_cleanup(GcUserProfileData_t657441114_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct GcUserProfileData_t657441114;
struct GcUserProfileData_t657441114_marshaled_com;

extern "C" void GcUserProfileData_t657441114_marshal_com(const GcUserProfileData_t657441114& unmarshaled, GcUserProfileData_t657441114_marshaled_com& marshaled);
extern "C" void GcUserProfileData_t657441114_marshal_com_back(const GcUserProfileData_t657441114_marshaled_com& marshaled, GcUserProfileData_t657441114& unmarshaled);
extern "C" void GcUserProfileData_t657441114_marshal_com_cleanup(GcUserProfileData_t657441114_marshaled_com& marshaled);
