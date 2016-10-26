#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Text.RegularExpressions.Group
struct Group_t2151468941;
// System.Text.RegularExpressions.CaptureCollection
struct CaptureCollection_t1173899026;

#include "System_System_Text_RegularExpressions_Capture754001812.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Group
struct  Group_t2151468941  : public Capture_t754001812
{
public:
	// System.Boolean System.Text.RegularExpressions.Group::success
	bool ___success_4;
	// System.Text.RegularExpressions.CaptureCollection System.Text.RegularExpressions.Group::captures
	CaptureCollection_t1173899026 * ___captures_5;

public:
	inline static int32_t get_offset_of_success_4() { return static_cast<int32_t>(offsetof(Group_t2151468941, ___success_4)); }
	inline bool get_success_4() const { return ___success_4; }
	inline bool* get_address_of_success_4() { return &___success_4; }
	inline void set_success_4(bool value)
	{
		___success_4 = value;
	}

	inline static int32_t get_offset_of_captures_5() { return static_cast<int32_t>(offsetof(Group_t2151468941, ___captures_5)); }
	inline CaptureCollection_t1173899026 * get_captures_5() const { return ___captures_5; }
	inline CaptureCollection_t1173899026 ** get_address_of_captures_5() { return &___captures_5; }
	inline void set_captures_5(CaptureCollection_t1173899026 * value)
	{
		___captures_5 = value;
		Il2CppCodeGenWriteBarrier(&___captures_5, value);
	}
};

struct Group_t2151468941_StaticFields
{
public:
	// System.Text.RegularExpressions.Group System.Text.RegularExpressions.Group::Fail
	Group_t2151468941 * ___Fail_3;

public:
	inline static int32_t get_offset_of_Fail_3() { return static_cast<int32_t>(offsetof(Group_t2151468941_StaticFields, ___Fail_3)); }
	inline Group_t2151468941 * get_Fail_3() const { return ___Fail_3; }
	inline Group_t2151468941 ** get_address_of_Fail_3() { return &___Fail_3; }
	inline void set_Fail_3(Group_t2151468941 * value)
	{
		___Fail_3 = value;
		Il2CppCodeGenWriteBarrier(&___Fail_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
