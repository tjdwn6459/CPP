#include <stdio.h>

class Time
{
private:
	int hour, min, sec;

public:
	Time(){}
	Time(int h, int m, int s) { hour = h; min = m; sec = s; }
	void OutTime() {
		printf("%d:%d:%d\n", hour, min, sec);
	}

	const Time operator+(int s)const {//t.sec에 인수로 받은 s초를 더한다 
		Time t = *this;
		t.sec += s;

		t.min += t.sec / 60;
		t.sec %= 60;
		t.hour += t.min / 60;
		t.min %= 60;
		return t;
	}
};

int main()
{
	Time now(11, 22, 33);
	now.OutTime();

	now = now + 1;//객체 와 상수 덧셈을 위해 연산자 오버로딩으로 재정의 했다 (1의 소속 int에 time객체를 받는 연산자 함수)
	now.OutTime();
}