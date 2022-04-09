#pragma once
#define Z_ARROW_LIGHT_H

#include "global.h"
#include "ultra64.h"

struct ArrowLight;

typedef void (*ArrowLightActionFunc)(struct ArrowLight*, GlobalContext*);

struct ArrowLight
{
	/* 0x0000 */ Actor actor;
	/* 0x014C */ s16 radius;
	/* 0x014E */ Timer timer;
	/* 0x0150 */ u8 alpha;
	/* 0x0154 */ Vec3f unkPos;
	/* 0x0160 */ f32 unk_160;
	/* 0x0164 */ f32 unk_164;
	/* 0x0168 */ ArrowLightActionFunc actionFunc;
};
