#include<iostream>
#include "Time.h"
using namedspace std;
Time::Time()
{
	hours = 0;
	minutes = 0;
	seconds = 0;
}

bool Time::Compare(Time t1, Time t2)
{
	if(t1.hours == t2.hours)
	{
		if(t1.minutes == t2.minutes)
		{
			if(t1.seconds == t2.seconds)
		}
	}
	return true;
}

void Time::Display()
{
	cout <<hours << minutes << seconds <<endl;
}

void Time::Difference(Time t1, Time t2)
{
	if(Compare(t1, t2)== true)
		cout<<"The times entered are equal";
}

