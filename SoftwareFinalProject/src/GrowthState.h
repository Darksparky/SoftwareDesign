#pragma once

class GrowthState {
private:
	int startTime; //in hours
	int timeElapsed; //in hours
	int stateDuration; //in hours
	bool canBeHarvested; // yes/no
	ofImage stateImage;
	std::string Name;

public:
	GrowthState();
	~GrowthState();
	GrowthState(int duration, std::string n, ofImage i, int parentTimeAlive);
	bool GetCanBeHarvested();
	int GetTimeElapsed();
	int GetStateDuration();
	void UpdateGrowthState(int parentTimeAlive);
};

