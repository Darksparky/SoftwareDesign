#pragma once


class GrowthState {
private:
	int timeElapsed;
	int stateDuration;
	bool canBeHarvested;
	ofImage stateImage;
	string Name;

public:
	GrowthState(int duration, string n, ofImage i);
	bool GetCanBeHarvested();
	int GetTimeElapsed();
	int GetStateDuration();

};

class CropsManager {

};