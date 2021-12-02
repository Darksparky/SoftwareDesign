#pragma once
class Player : public AnimatedObject
{
public:
	int money;
	int playerRotation;
	
	//Tile tile

	void Harvest();
	void Water();
	void Interaction(Player*play, GameObject*obj);
};

