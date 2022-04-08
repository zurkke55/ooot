#pragma once
#define Z_BG_INGATE_H

#include "global.h"
#include "ultra64.h"

struct BgInGate;

typedef void (*BgInGateActionFunc)(struct BgInGate*, GlobalContext*);

struct BgInGate
{
	/* 0x0000 */ DynaPolyActor dyna;
	/* 0x0164 */ BgInGateActionFunc actionFunc;
};
