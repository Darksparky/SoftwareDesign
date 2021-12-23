#pragma once
#include "Main.h"

GrowthState::GrowthState()
{

};
GrowthState::~GrowthState() {

};
GrowthState::GrowthState(int duration, std::string n, ofImage i, int parentTimeAlive) {
	stateImage = i;
	stateDuration = duration;
	Name = n;
	startTime = parentTimeAlive;
};
bool GrowthState::GetCanBeHarvested() {
	return canBeHarvested;
};

int GrowthState::GetTimeElapsed() {
	return timeElapsed;
};

int GrowthState::GetStateDuration() {
	return stateDuration;
};

void GrowthState::UpdateGrowthState(int parentTimeAlive) {
	timeElapsed = parentTimeAlive - startTime;

	//check to see if it has been watered within a given time here in the 
	//update function
};