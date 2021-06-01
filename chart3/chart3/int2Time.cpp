#include <stdio.h>

class Time
{
private:
	int hour, min, sec;

public:
	Time(int h, int m, int s) {
		hour = h;
		min = m;
		sec = s;
	}
	Time(int abssec) {
		hour = abssec / 3600;
		min = (abssec / 60) % 60;
		sec = abssec % 60;
	}

	void OutTime()
	{
		printf("현재시간은 %d:%d:%d입니다\n", hour, min, sec);
	}
};

void printTime(Time when)
{
	when.OutTime();
}
int main()
{
	Time noon(40000);//Time객체를 생성해서 noon이라는 인스턴스를 선언해 괄호안의 절대초를 전달 해준다 
	Time now = 60000;
	now.OutTime();
	now = 70000;
	now.OutTime();

	printTime(80000);
}