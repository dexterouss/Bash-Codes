#include<iostream>
using namespace std;
class Time
{
	private:
		int hour;
		int minutes;
		int seconds;

	public:
		Time();
		void Display();
		bool Compare();
		int Difference();
};
