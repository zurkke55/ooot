#pragma once
#include "view.h"
#include "z64game.h"

struct OpeningContext
{
	/* 0x0000 */ GameState state;
	/* 0x00A8 */ View view;
}; // size = 0x1D0

void Opening_Init(GameState* thissx);
void Opening_Destroy(GameState* thissx);