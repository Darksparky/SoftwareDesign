#include "Main.h"
//These need to be moved to the main one


void TimeCycle::UpdateTimeCycle()
{
	if (isStart) {
		isStart = false;
		minute = 0;
		hour = 0;
		day = 1;
		month = 1;
		year = 1;
		daysElapsed = 0;

	}
	//Here we will increase the minute varable based on the time since 
	//the last frame or tick if we implement ticks... 

	minute = minute + ofGetLastFrameTime();
	if (minute >= 60)
	{
		ChangeHour();
		if (hour > 23)
		{
			ChangeDay();
			if (day > 30)
			{
				ChangeMonth();
				if (month > 4)
				{
					ChangeYear();
				}
			}
		}
	}

};

float TimeCycle::GetMinute() {
	return minute;
};

int TimeCycle::GetHour() {
	return hour;
};

int TimeCycle::GetDay() {
	return day;
};

int TimeCycle::GetMonth() {
	return month;
};

int TimeCycle::GetYear() {
	return year;
};
int TimeCycle::GetDaysElapsed() {
	return daysElapsed;
};
/// <summary>
/// This function executes all logic  that rely on counting hours.
/// </summary>
void TimeCycle::ChangeHour() {
	//Internal Counting code
	minute = 0;
	hour++;
	//External calls go here
	//Call CropsManager::AddHour();
	//call LightingFilter::UpdateLighting(Hour)
};
/// <summary>
/// This function executes all logic  that rely on counting days.
/// </summary>
void TimeCycle::ChangeDay() {
	//Internal Counting changes
	hour = 0;
	day++;
	daysElapsed++;
	//Any External calls go here
};
/// <summary>
/// This function executes all logic  that rely on counting months.
/// </summary>
void TimeCycle::ChangeMonth() {
	//Internal counting changes
	day = 1;
	month++;
	//External calls go here
};
/// <summary>
/// This function executes all logic  that rely on counting minutes.
/// </summary>
void TimeCycle::ChangeYear() {
	//internal counting code
	month = 1;
	year++;
	//any external calls go here
}