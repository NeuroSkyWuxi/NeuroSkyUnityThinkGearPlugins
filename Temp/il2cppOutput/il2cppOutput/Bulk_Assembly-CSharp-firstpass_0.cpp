#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

// UnityThinkGear
struct UnityThinkGear_t3745296844;
// System.String
struct String_t;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array1146569071.h"
#include "AssemblyU2DCSharpU2Dfirstpass_U3CModuleU3E86524790.h"
#include "AssemblyU2DCSharpU2Dfirstpass_U3CModuleU3E86524790MethodDeclarations.h"
#include "AssemblyU2DCSharpU2Dfirstpass_UnityThinkGear3745296844.h"
#include "AssemblyU2DCSharpU2Dfirstpass_UnityThinkGear3745296844MethodDeclarations.h"
#include "mscorlib_System_Void2863195528.h"
#include "mscorlib_System_Object4170816371MethodDeclarations.h"
#include "mscorlib_System_Boolean476798718.h"
#include "mscorlib_System_String7231557.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityThinkGear::.ctor()
extern "C"  void UnityThinkGear__ctor_m2262950915 (UnityThinkGear_t3745296844 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1772956182(__this, /*hidden argument*/NULL);
		return;
	}
}
extern "C" void DEFAULT_CALL TGAM_Init(int32_t);
// System.Void UnityThinkGear::TGAM_Init(System.Boolean)
extern "C"  void UnityThinkGear_TGAM_Init_m2946368648 (Il2CppObject * __this /* static, unused */, bool ___rawEnabled0, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(TGAM_Init)(___rawEnabled0);

}
extern "C" void DEFAULT_CALL TGAM_Close();
// System.Void UnityThinkGear::TGAM_Close()
extern "C"  void UnityThinkGear_TGAM_Close_m2326164025 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(TGAM_Close)();

}
extern "C" void DEFAULT_CALL TGAM_StartStream();
// System.Void UnityThinkGear::TGAM_StartStream()
extern "C"  void UnityThinkGear_TGAM_StartStream_m994859075 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(TGAM_StartStream)();

}
extern "C" void DEFAULT_CALL TGAM_StopStream();
// System.Void UnityThinkGear::TGAM_StopStream()
extern "C"  void UnityThinkGear_TGAM_StopStream_m1696258403 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(TGAM_StopStream)();

}
extern "C" void DEFAULT_CALL TGAM_ScanDevice();
// System.Void UnityThinkGear::TGAM_ScanDevice()
extern "C"  void UnityThinkGear_TGAM_ScanDevice_m3569049140 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(TGAM_ScanDevice)();

}
extern "C" void DEFAULT_CALL TGAM_ConnectDevice(char*);
// System.Void UnityThinkGear::TGAM_ConnectDevice(System.String)
extern "C"  void UnityThinkGear_TGAM_ConnectDevice_m923154049 (Il2CppObject * __this /* static, unused */, String_t* ___deviceId0, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___deviceId0' to native representation
	char* ____deviceId0_marshaled = NULL;
	____deviceId0_marshaled = il2cpp_codegen_marshal_string(___deviceId0);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(TGAM_ConnectDevice)(____deviceId0_marshaled);

	// Marshaling cleanup of parameter '___deviceId0' native representation
	il2cpp_codegen_marshal_free(____deviceId0_marshaled);
	____deviceId0_marshaled = NULL;

}
extern "C" int32_t DEFAULT_CALL TGAM_GetSendRawEnable();
// System.Boolean UnityThinkGear::TGAM_GetSendRawEnable()
extern "C"  bool UnityThinkGear_TGAM_GetSendRawEnable_m4251509970 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(TGAM_GetSendRawEnable)();

	return returnValue;
}
extern "C" int32_t DEFAULT_CALL TGAM_GetSendEEGEnable();
// System.Boolean UnityThinkGear::TGAM_GetSendEEGEnable()
extern "C"  bool UnityThinkGear_TGAM_GetSendEEGEnable_m3907953009 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(TGAM_GetSendEEGEnable)();

	return returnValue;
}
extern "C" int32_t DEFAULT_CALL TGAM_GetSendESenseEnable();
// System.Boolean UnityThinkGear::TGAM_GetSendESenseEnable()
extern "C"  bool UnityThinkGear_TGAM_GetSendESenseEnable_m345682599 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(TGAM_GetSendESenseEnable)();

	return returnValue;
}
extern "C" int32_t DEFAULT_CALL TGAM_GetSendBlinkEnable();
// System.Boolean UnityThinkGear::TGAM_GetSendBlinkEnable()
extern "C"  bool UnityThinkGear_TGAM_GetSendBlinkEnable_m4244819590 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(TGAM_GetSendBlinkEnable)();

	return returnValue;
}
extern "C" void DEFAULT_CALL TGAM_SetSendRawEnable(int32_t);
// System.Void UnityThinkGear::TGAM_SetSendRawEnable(System.Boolean)
extern "C"  void UnityThinkGear_TGAM_SetSendRawEnable_m2451518809 (Il2CppObject * __this /* static, unused */, bool ___enabled0, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(TGAM_SetSendRawEnable)(___enabled0);

}
extern "C" void DEFAULT_CALL TGAM_SetSendEEGEnable(int32_t);
// System.Void UnityThinkGear::TGAM_SetSendEEGEnable(System.Boolean)
extern "C"  void UnityThinkGear_TGAM_SetSendEEGEnable_m1647505336 (Il2CppObject * __this /* static, unused */, bool ___enabled0, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(TGAM_SetSendEEGEnable)(___enabled0);

}
extern "C" void DEFAULT_CALL TGAM_SetSendESenseEnable(int32_t);
// System.Void UnityThinkGear::TGAM_SetSendESenseEnable(System.Boolean)
extern "C"  void UnityThinkGear_TGAM_SetSendESenseEnable_m1917254478 (Il2CppObject * __this /* static, unused */, bool ___enabled0, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(TGAM_SetSendESenseEnable)(___enabled0);

}
extern "C" void DEFAULT_CALL TGAM_SetSendBlinkEnable(int32_t);
// System.Void UnityThinkGear::TGAM_SetSendBlinkEnable(System.Boolean)
extern "C"  void UnityThinkGear_TGAM_SetSendBlinkEnable_m2371989517 (Il2CppObject * __this /* static, unused */, bool ___enabled0, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(TGAM_SetSendBlinkEnable)(___enabled0);

}
// System.Void UnityThinkGear::Init(System.Boolean)
extern "C"  void UnityThinkGear_Init_m4243397032 (Il2CppObject * __this /* static, unused */, bool ___rawEnabled0, const MethodInfo* method)
{
	{
		bool L_0 = ___rawEnabled0;
		UnityThinkGear_TGAM_Init_m2946368648(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityThinkGear::Close()
extern "C"  void UnityThinkGear_Close_m3973810457 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	{
		UnityThinkGear_TGAM_Close_m2326164025(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityThinkGear::StartStream()
extern "C"  void UnityThinkGear_StartStream_m1951188771 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	{
		UnityThinkGear_TGAM_StartStream_m994859075(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityThinkGear::StopStream()
extern "C"  void UnityThinkGear_StopStream_m618729091 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	{
		UnityThinkGear_TGAM_StopStream_m1696258403(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityThinkGear::ScanDevice()
extern "C"  void UnityThinkGear_ScanDevice_m2491519828 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	{
		UnityThinkGear_TGAM_ScanDevice_m3569049140(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityThinkGear::ConnectDevice(System.String)
extern "C"  void UnityThinkGear_ConnectDevice_m3942525857 (Il2CppObject * __this /* static, unused */, String_t* ___deviceId0, const MethodInfo* method)
{
	{
		String_t* L_0 = ___deviceId0;
		UnityThinkGear_TGAM_ConnectDevice_m923154049(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityThinkGear::GetSendRawEnable()
extern "C"  bool UnityThinkGear_GetSendRawEnable_m50572714 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	{
		bool L_0 = UnityThinkGear_TGAM_GetSendRawEnable_m4251509970(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Boolean UnityThinkGear::GetSendEEGEnable()
extern "C"  bool UnityThinkGear_GetSendEEGEnable_m4001983049 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	{
		bool L_0 = UnityThinkGear_TGAM_GetSendEEGEnable_m3907953009(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Boolean UnityThinkGear::GetSendESenseEnable()
extern "C"  bool UnityThinkGear_GetSendESenseEnable_m1275927247 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	{
		bool L_0 = UnityThinkGear_TGAM_GetSendESenseEnable_m345682599(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Boolean UnityThinkGear::GetSendBlinkEnable()
extern "C"  bool UnityThinkGear_GetSendBlinkEnable_m118407518 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	{
		bool L_0 = UnityThinkGear_TGAM_GetSendBlinkEnable_m4244819590(NULL /*static, unused*/, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void UnityThinkGear::SetSendRawEnable(System.Boolean)
extern "C"  void UnityThinkGear_SetSendRawEnable_m4040661625 (Il2CppObject * __this /* static, unused */, bool ___enabled0, const MethodInfo* method)
{
	{
		bool L_0 = ___enabled0;
		UnityThinkGear_TGAM_SetSendRawEnable_m2451518809(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityThinkGear::SetSendEEGEnable(System.Boolean)
extern "C"  void UnityThinkGear_SetSendEEGEnable_m3236648152 (Il2CppObject * __this /* static, unused */, bool ___enabled0, const MethodInfo* method)
{
	{
		bool L_0 = ___enabled0;
		UnityThinkGear_TGAM_SetSendEEGEnable_m1647505336(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityThinkGear::SetSendESenseEnable(System.Boolean)
extern "C"  void UnityThinkGear_SetSendESenseEnable_m646382126 (Il2CppObject * __this /* static, unused */, bool ___enabled0, const MethodInfo* method)
{
	{
		bool L_0 = ___enabled0;
		UnityThinkGear_TGAM_SetSendESenseEnable_m1917254478(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityThinkGear::SetSendBlinkEnable(System.Boolean)
extern "C"  void UnityThinkGear_SetSendBlinkEnable_m529878317 (Il2CppObject * __this /* static, unused */, bool ___enabled0, const MethodInfo* method)
{
	{
		bool L_0 = ___enabled0;
		UnityThinkGear_TGAM_SetSendBlinkEnable_m2371989517(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
