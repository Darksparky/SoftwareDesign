#pragma once
#include "Main.h"

GrowthState::GrowthState(int duration, std::string n, ofImage i, Crop parent) {
	stateImage = i;
	stateDuration = duration;
	Name = n;
	parentCrop = parent;
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
	
};