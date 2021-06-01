#include <stdio.h>

class Time
{
private:
	int hour, min, sec;

public:
	Time(int h, int m, int s)
	{
		hour = h;
		min = m;
		sec = s;
	}

	Time(int abssec)
	{
		hour = abssec / 3600;
		min = (abssec / 60) % 60;
		sec = abssec % 60;
	}

	operator int() {//변환 생성자 ->암시적인 형 변환으로 객체를 생성할 수있게 해준다 
		return hour * 3600 + min * 60 + sec;//객체를 변환시킬려면 바꾸고 리턴만 시켜주면 댄다 
	}

	void OutTime()
	{
		printf("현재시간은 %d:%d:%d입니다 ", hour, min, sec);
	}
};

int main()
{
	Time now(12, 34, 56);
	int i = now;
	printf("i = %d\n", i);
}