#include<iostream>
using namespace std;

class Clock
{
public:
	void setTime(int hour, int min, int sec);					//set a new time
	void showTime();											//show the time
	void showTime(int n)										//overload and inline
	{
		cout << Hour << "��" << Minute << "��" << Second << "��" << endl;
	}
private:
	int Hour;
	int Minute;
	int Second;
};
