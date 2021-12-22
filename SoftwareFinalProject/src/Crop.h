#pragma once
#include "Main.h"
class Crop {
private:
	//Tile parentTile;
	float timeAlive;
	bool isAlive;
	std::vector<GrowthState> possibleGrowthStates;
	GrowthState currentGrowthState;
	std::string name;
	bool canBeHarvested;

public:
	Crop();
	~Crop();
	void SetTimeAlive(float newTime);
	float GetTimeAlive();
	void Harvest();
	void Wither();
	void RemovePlant();//reset the tile
	GrowthState GetCurrentGrowthState();
	void Update();
};