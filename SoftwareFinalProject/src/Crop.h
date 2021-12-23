#pragma once

class Crop
{
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
	void RemovePlant();
	bool GetIsAlive();
	GrowthState GetCurrentGrowthState();
	void Update();
	