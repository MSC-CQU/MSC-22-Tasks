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
		if ((it->x - pos.x) * (it->x - pos.x) + (it->y - pos.y) * (it->y - pos.y) < 20) {//û������DWORD,ָ����double word�����ĸ��ֽڣ�32λ��ʹ��ʱҪ���#include<windows.h>
			//pos�Ƕ�����GameBaseActor��Ľṹ�嵫����geowfood���������
			die = true;
			a->EatFood();
			break;
		}
	}
}