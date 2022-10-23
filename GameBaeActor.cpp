#include "GameBaseActor.h"
GameBaseActor::GameBaseActor() {
	startTime = GetTickCount();
}
void GameBaseActor::Tick() {//����Tick����������GameBaseActor��
	if (GetTickCount() - startTime > lifeTime && lifeTime > 0)
		Death();
}
void GameBaseActor::Death() {
	die = true;
}
bool GameBaseActor::GetState() {
	return die;
}