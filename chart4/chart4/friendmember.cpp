#include <stdio.h>

class Time;
class Date
{
private:
	int year, month, day;

public:
	Date(int y, int m, int d)
	{
		year = y;
		month = m;
		day = d;
	}
	void OutToday(Time& t);
};

class Time
{
	friend void Date::OutToday(Time& t);

private:
	int hour, min, sec;
public:
	Time(int h, int m, int s) { hour = h; min = m; sec = s; }
};

void Date::OutToday(Time& t)
{
	printf("오늘은 %d년%d월 %d일이며 지금 시간은 %d:%d:%d입니다 \n",
		year, month, day, t.hour, t.min, t.sec);
}

int mian()
{

	Date d(2019, 04, 22);
	Time t(12, 24, 56);
	d.OutToday(t);
}