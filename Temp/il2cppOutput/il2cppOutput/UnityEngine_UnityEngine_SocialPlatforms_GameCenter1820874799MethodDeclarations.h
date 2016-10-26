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

// UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard
struct GcLeaderboard_t1820874799;
// UnityEngine.SocialPlatforms.Impl.Leaderboard
struct Leaderboard_t1185876199;
// UnityEngine.SocialPlatforms.GameCenter.GcScoreData[]
struct GcScoreDataU5BU5D_t1670395707;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t4054002952;
struct GcLeaderboard_t1820874799_marshaled_pinvoke;
struct GcLeaderboard_t1820874799_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_SocialPlatforms_Impl_Leade1185876199.h"
#include "UnityEngine_UnityEngine_SocialPlatforms_GameCenter2181296590.h"
#include "mscorlib_System_String7231557.h"

// System.Void UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::.ctor(UnityEngine.SocialPlatforms.Impl.Leaderboard)
extern "C"  void GcLeaderboard__ctor_m4042810199 (GcLeaderboard_t1820874799 * __this, Leaderboard_t1185876199 * ___board0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::Finalize()
extern "C"  void GcLeaderboard_Finalize_m4015840938 (GcLeaderboard_t1820874799 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::Contains(UnityEngine.SocialPlatforms.Impl.Leaderboard)
extern "C"  bool GcLeaderboard_Contains_m100384368 (GcLeaderboard_t1820874799 * __this, Leaderboard_t1185876199 * ___board0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::SetScores(UnityEngine.SocialPlatforms.GameCenter.GcScoreData[])
extern "C"  void GcLeaderboard_SetScores_m1734279820 (GcLeaderboard_t1820874799 * __this, GcScoreDataU5BU5D_t1670395707* ___scoreDatas0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::SetLocalScore(UnityEngine.SocialPlatforms.GameCenter.GcScoreData)
extern "C"  void GcLeaderboard_SetLocalScore_m3970132532 (GcLeaderboard_t1820874799 * __this, GcScoreData_t2181296590  ___scoreData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::SetMaxRange(System.UInt32)
extern "C"  void GcLeaderboard_SetMaxRange_m3160374921 (GcLeaderboard_t1820874799 * __this, uint32_t ___maxRange0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::SetTitle(System.String)
extern "C"  void GcLeaderboard_SetTitle_m3781988000 (GcLeaderboard_t1820874799 * __this, String_t* ___title0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::Internal_LoadScores(System.String,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void GcLeaderboard_Internal_LoadScores_m1783152707 (GcLeaderboard_t1820874799 * __this, String_t* ___category0, int32_t ___from1, int32_t ___count2, int32_t ___playerScope3, int32_t ___timeScope4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::Internal_LoadScoresWithUsers(System.String,System.Int32,System.String[])
extern "C"  void GcLeaderboard_Internal_LoadScoresWithUsers_m1315210452 (GcLeaderboard_t1820874799 * __this, String_t* ___category0, int32_t ___timeScope1, StringU5BU5D_t4054002952* ___userIDs2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::Loading()
extern "C"  bool GcLeaderboard_Loading_m294711596 (GcLeaderboard_t1820874799 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::Dispose()
extern "C"  void GcLeaderboard_Dispose_m301614325 (GcLeaderboard_t1820874799 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct GcLeaderboard_t1820874799;
struct GcLeaderboard_t1820874799_marshaled_pinvoke;

extern "C" void GcLeaderboard_t1820874799_marshal_pinvoke(const GcLeaderboard_t1820874799& unmarshaled, GcLeaderboard_t1820874799_marshaled_pinvoke& marshaled);
extern "C" void GcLeaderboard_t1820874799_marshal_pinvoke_back(const GcLeaderboard_t1820874799_marshaled_pinvoke& marshaled, GcLeaderboard_t1820874799& unmarshaled);
extern "C" void GcLeaderboard_t1820874799_marshal_pinvoke_cleanup(GcLeaderboard_t1820874799_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct GcLeaderboard_t1820874799;
struct GcLeaderboard_t1820874799_marshaled_com;

extern "C" void GcLeaderboard_t1820874799_marshal_com(const GcLeaderboard_t1820874799& unmarshaled, GcLeaderboard_t1820874799_marshaled_com& marshaled);
extern "C" void GcLeaderboard_t1820874799_marshal_com_back(const GcLeaderboard_t1820874799_marshaled_com& marshaled, GcLeaderboard_t1820874799& unmarshaled);
extern "C" void GcLeaderboard_t1820874799_marshal_com_cleanup(GcLeaderboard_t1820874799_marshaled_com& marshaled);
