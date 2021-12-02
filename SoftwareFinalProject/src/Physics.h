#pragma once
class Physics 
{
public:

	void Move(GameObject* obj, int targetX, int targetY);

	bool collisionCheck(GameObject* obj1, GameObject* obj2);
	bool collisionCheck(Player* obj1, GameObject* obj2);



};