#include "Main.h"
//These need to be moved to the main one
#include <iostream>
#include <iomanip>
#include <chrono>
#include <ctime>
#include <thread>

void TimeCycle::UpdateTimeCycle()
{
	if (isStart) {
		begin_time = clock();
	}
	//Here we will increase the minute varable based on the time since the last frame or tick if we implement ticks... 

	if (minute >= 60)
	{
		minute = 0;
		hour++;
		if (hour > 23)
		{
			hour = 0;
			day++;
			if (day > 30)
			{
				day = 1;
				month++;
				if (month > 4) 
				{
					month = 1;
					year++;
				}
			}
		}
	}

}