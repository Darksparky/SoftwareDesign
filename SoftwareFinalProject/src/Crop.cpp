#pragma once
#include "Main.h"
void Crop::SetTimeAlive(float newTime) {
	timeAlive = newTime;
};

GrowthState Crop::GetCurrentGrowthState() {
	return currentGrowthState;
};

void Crop::Harvest() {
	//Do interaction action/tile and item related stuff Idk about
};

void Crop::Wither() {
	//current growthstate now = the first growth state (deadplant)
	isAlive = false;
};

Crop::Crop() {
	//set up the growth states
};

Crop::~Crop()
{

}
void Crop::RemovePlant() {
	//do action and tile related things idk how to do
	//maybe it clears the image and deletes the instance
		
};
bool Crop::GetIsAlive() {
	return isAlive;
}
void Crop::Update() {
	//check to see if the growth state grows
	currentGrowthState.UpdateGrowthState();
	if (currentGrowthState.GetStateDuration() > 0) {
		//check to see the elapsed time is greater than or equal to the needed duration of the grow
		if (currentGrowthState.GetTimeElapsed() >= currentGrowthState.GetStateDuration()) {
			
		}
	}
	canBeHarvested = currentGrowthState.GetCanBeHarvested();
};