#include"SceneManager.h"
void SceneManager::RunTick() {
	for (std::vector<GameBaseActor*>::iterator it = GA.begin(); it != GA.end(); it++)//"GameBaseActorΪʲô��ָ�룿
	{
		if ((*it)->GetState()) {

		}
		else {
			(*it)->Tick();//*it�������������GameBaseActor������
		}
	}
}
void SceneManager::SpawnActor(GameBaseActor* a) {
	GA.push_back(a);
}