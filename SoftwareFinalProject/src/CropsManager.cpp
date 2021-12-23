#include"Main.h"
void CropsManager::AddCrop(Crop cropToAdd) {
	crops.push_back(cropToAdd);
};

void CropsManager::RemoveCrop(Crop cropToRemove) {
	crops.erase(cropToRemove);
	
};

void CropsManager::AddHour() {
	//Im going to put three different options and if one works you can delete the rest
	
	//method 1
	for (auto &c : crops) {
		if (c.GetIsAlive()) {
			int newTimeAlive = c.GetTimeAlive() + 1;
			c.SetTimeAlive(newTimeAlive);
		}
		
	};

	/* 
	// Method 2
	//may need to mess with pointers "." vs "->"
	std::for_each(crops.begin(),crops.end(),[](Crop *c)
	{
		if(c->GetIsAlive())
		{
			int newTimeAlive = c->GetTimeAlive() + 1;
			c->SetTimeAlive(newTimeAlive);
		}
	}
	*/

	/*
	//Method 3
	//may need to mess with pointers "." vs "->"
	for (auto c = crops.begin(); c != crops.end(); ++c) 
	{
		if (c->GetIsAlive()) 
		{
			int newTimeAlive = c->GetTimeAlive() + 1;
			c->SetTimeAlive(newTimeAlive);
		}
	}
	*/
}

void CropsManager::UpdateCrops() {
	//Im going to put three different options and if one works you can delete the rest

//method 1
	for (auto &c : crops) {
		c.Update();
	};

	/*
	// Method 2
	//may need to mess with pointers "." vs "->"
	std::for_each(crops.begin(),crops.end(),[](Crop *c)
	{
		c->Update();
	}
	*/

	/*
	//Method 3
	//may need to mess with pointers "." vs "->"
	for (auto c = crops.begin(); c != crops.end(); ++c)
	{
		c->Update();
	}
	*/
}
