#pragma once
#include "Main.h"


GrowthState::GrowthState(int duration, std::string n, ofImage i) {
	stateImage = i;
	stateDuration = duration;
	Name = n;
	//parentCrop = parent;
	//startTime = parentCrop.GetTimeAlive();
}
bool GrowthState::GetCanBeHarvested() {
	return GetCanBeHarvested;
};

int GrowthState::GetTimeElapsed() {
	return timeElapsed;
};

int GrowthState::GetStateDuration() {
	return stateDuration;
};

void GrowthState::UpdateGrowthState() {
	//called by the update function of the parent crop
	//timeElapsed = parentCrop.GetTimeAlive() - startTime;
};