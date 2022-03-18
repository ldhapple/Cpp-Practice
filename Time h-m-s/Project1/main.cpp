#include <iostream>
using namespace std;

class Time {
public:
	int hour, min, second;
	int sec;
	int divideTime(int sec);
};

int Time::divideTime(int sec)
{
	hour = sec / 3600;
	min = (sec % 3600) / 60;
	second = (sec % 3600 % 60);
	cout << sec << "ÃÊ=" << hour << "h " << min << "m " << second << "s" << endl;

	return sec;
}

int main() 
{
	Time s;
	
	s.divideTime(43);
	s.divideTime(156);
	s.divideTime(4563);
}