#pragma once
class Player : public AnimatedObject
{
public:
	int money;
	int playerRotation;
	bool shopInteraction;
	
	//Tile tile

	void Harvest();
	void Water();
	void ObjectInteraction(Player*play, GameObject*obj);
	void DoorInteraction(Player*play, GameObject*obj);
};

