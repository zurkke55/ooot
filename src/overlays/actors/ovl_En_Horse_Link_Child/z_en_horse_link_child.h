#pragma once
#define Z_EN_HORSE_LINK_CHILD_H

#include "global.h"
#include "ultra64.h"

struct EnHorseLinkChild;

typedef void (*EnHorseLinkChildActionFunc)(struct EnHorseLinkChild*, GlobalContext*);

struct EnHorseLinkChild
{
	/* 0x0000 */ Actor actor;
	/* 0x014C */ s32 action;
	/* 0x0150 */ s32 animationIdx;
	/* 0x0154 */ PSkinAwb skin;
	/* 0x01E4 */ s32 timer;
	/* 0x01E8 */ s32 unk_1E8;
	/* 0x01EC */ u8 eyeTexIndex;
	/* 0x01F0 */ s32 unk_1F0;
	/* 0x01F4 */ ColliderCylinder bodyCollider;
	/* 0x0240 */ ColliderJntSph headCollider;
	/* 0x0260 */ ColliderJntSphElement headElements[1];
	/* 0x02A0 */ s32 unk_2A0;
};
