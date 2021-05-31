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

	//생성자 (초를 주고 시분초로 나눠서 객체로 생성해서 사용)
	Time(int abssec) {
		hour = abssec / 3600;
		min = (abssec / 60) % 60;
		sec = abssec % 60;
	}

	void OutTime() {
		printf("현재시간은 %d:%d:%d 입니다 \n", hour, min, sec);
	}
};

int main()
{
	Time now(12, 30, 40);
	now.OutTime();
	Time noon(44000);
	noon.OutTime();


}