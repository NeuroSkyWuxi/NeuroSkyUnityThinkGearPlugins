#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Text.DecoderFallback
struct DecoderFallback_t649129352;
// System.Text.DecoderFallbackBuffer
struct DecoderFallbackBuffer_t4139272936;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.Decoder
struct  Decoder_t2225063046  : public Il2CppObject
{
public:
	// System.Text.DecoderFallback System.Text.Decoder::fallback
	DecoderFallback_t649129352 * ___fallback_0;
	// System.Text.DecoderFallbackBuffer System.Text.Decoder::fallback_buffer
	DecoderFallbackBuffer_t4139272936 * ___fallback_buffer_1;

public:
	inline static int32_t get_offset_of_fallback_0() { return static_cast<int32_t>(offsetof(Decoder_t2225063046, ___fallback_0)); }
	inline DecoderFallback_t649129352 * get_fallback_0() const { return ___fallback_0; }
	inline DecoderFallback_t649129352 ** get_address_of_fallback_0() { return &___fallback_0; }
	inline void set_fallback_0(DecoderFallback_t649129352 * value)
	{
		___fallback_0 = value;
		Il2CppCodeGenWriteBarrier(&___fallback_0, value);
	}

	inline static int32_t get_offset_of_fallback_buffer_1() { return static_cast<int32_t>(offsetof(Decoder_t2225063046, ___fallback_buffer_1)); }
	inline DecoderFallbackBuffer_t4139272936 * get_fallback_buffer_1() const { return ___fallback_buffer_1; }
	inline DecoderFallbackBuffer_t4139272936 ** get_address_of_fallback_buffer_1() { return &___fallback_buffer_1; }
	inline void set_fallback_buffer_1(DecoderFallbackBuffer_t4139272936 * value)
	{
		___fallback_buffer_1 = value;
		Il2CppCodeGenWriteBarrier(&___fallback_buffer_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
