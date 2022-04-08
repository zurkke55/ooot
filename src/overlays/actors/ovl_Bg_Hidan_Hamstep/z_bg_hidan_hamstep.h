#pragma once
#define Z_BG_HIDAN_HAMSTEP_H

#include "global.h"
#include "ultra64.h"

struct BgHidanHamstep;

typedef void (*BgHidanHamstepActionFunc)(struct BgHidanHamstep*, GlobalContext*);

struct BgHidanHamstep
{
	/* 0x0000 */ DynaPolyActor dyna;
	/* 0x0164 */ ColliderTris collider;
	/* 0x0184 */ ColliderTrisElement colliderItems[2];
	/* 0x023C */ BgHidanHamstepActionFunc actionFunc;
	/* 0x0240 */ s32 action;
	/* 0x0244 */ s32 unk_244;
};
