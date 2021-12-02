#pragma once
Class TimeCycle{
private:
	float minute;
	int hour;
	int day;
	int month;
	int year;
	bool isStart;
	const clock_t begin_time; 
public:
	void UpdateTimeCycle();
};