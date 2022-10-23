#include"growfood.h"
#include"GameBaseActor.h"
#include"snake.h"
#include<windows.h>

growfood::growfood(snake* a, DWORD color, int Cell, DWORD LifeTime) :snakefood(a, color, Cell, LifeTime) {

}
void growfood::Tick() {
	snakefood::Tick();
}
void growfood::Effect() {
	std::vector<POINT>aa = a->AllPoint();
	for (std::vector<POINT>::iterator it = aa.begin(); it != aa.end(); it++) {
		if ((it->x - pos.x) * (it->x - pos.x) + (it->y - pos.y) * (it->y - pos.y) < 20) {//没见过的DWORD,指的是double word，即四个字节，32位，使用时要添加#include<windows.h>
			//pos是定义在GameBaseActor里的结构体但不在geowfood里？是这样吗
			die = true;
			a->EatFood();
			break;
		}
	}
}