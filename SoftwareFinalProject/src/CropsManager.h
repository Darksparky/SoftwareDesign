#pragma once

class CropsManager {
private:
	std::vector<Crop> crops;
public:
	CropsManager();
	~CropsManager();
	void AddCrop(Crop cropToAdd);
	void AddHour();
	void RemoveCrop(Crop cropToRemove);
	void UpdateCrops(); //calls the update function on each crop in the list;
};