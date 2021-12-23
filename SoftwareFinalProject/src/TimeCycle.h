#pragma once
class TimeCycle{
private:
	float minute;
	float time;
	int hour;
	int day;
	int month;
	int year;
	int daysElapsed;
	bool isStart = true;
	//const clock_t begin_time; 
	void ChangeHour();
	void ChangeDay();
	void ChangeMonth();
	void ChangeYear();
public:
	void UpdateTimeCycle();
	float GetMinute();
	int GetHour();
	int GetDay();
	int GetMonth();
	int GetYear();
	int GetDaysElapsed();
	TimeCycle();
	~TimeCycle();
	void AddTime(int amount);
};
