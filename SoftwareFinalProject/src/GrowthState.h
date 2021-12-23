#pragma once

class GrowthState {
private:
	int startTime;
	int timeElapsed;
	int stateDuration;
	bool canBeHarvested;
	ofImage stateImage;
	std::string Name;
	//Crop parentCrop;

public:
	GrowthState();
	GrowthState(int duration, std::string n, ofImage i);
	bool GetCanBeHarvested();
	int GetTimeElapsed();
	int GetStateDuration();
	void UpdateGrowthState();
};

