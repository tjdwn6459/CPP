#include <stdio.h>

class Time
{
	friend class Date;
private:
	int hour, min, sec;
public:
	Time(int h, int m, int s)
	{
		hour = h; min = m; sec = s;
	}
};

class Date
{
private:
	int year, month, day;
public:
	Date(int y, int m, int d)
	{
		year = y; month = m; day = d;
	}
	void OutToday(Time& t) {
		printf("������ %d�� %d��%d���̸� ������ %d:%d:%d�Դϴ� \n",
			year, month, day, t.hour, t.min, t.sec);
	}
};

int main()
{


	Date d(2018, 02, 23);
	Time t(12, 34, 56);
	d.OutToday(t);
}