#pragma once
#include "snakefood.h"
class growfood :public snakefood {
public:
	growfood(snake* a, DWORD color, int Cell = 12, DWORD LifeTime = 9000);
	void Tick();
	void Effect();
	DWORD pos;
};