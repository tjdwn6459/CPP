#include <stdio.h>

class Time
{
private:
	int hour, min, sec; //구성요소
public:
	void SetTime(int h, int m, int s) //구성요소를 따로 멤버변수로 선언
	{
		hour = h; 
		min = m;
		sec = s;

	}

	void OutTime()
	{
		printf("현재시간은 %d:%d:%d입니다 \n", hour, min, sec);
	}
};

int main()
{
	Time now; 

	now.SetTime(12, 30, 40);
	now.OutTime();
}