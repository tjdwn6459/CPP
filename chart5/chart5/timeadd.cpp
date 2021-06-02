#include <stdio.h>

class Time
{
private:
	int hour, min, sec;

public:

	Time() {}
	Time(int h, int m, int s) { hour = h; min = m; sec = s; }
	void OutTime() {
		printf("%d:%d:%d\n", hour, min, sec);
	}

	const Time AddTime(const Time& other)const {//두개의 시간을 더하는 멤버함수(객체를 매개변수로 받을때는 참조연산자 사용)
		Time t;//연산 결과 저장하기위해 임시 객체 t를 선언
		t.sec = sec + other.sec;
		t.min = min + other.min;
		t.hour = hour + other.hour;

		t.min += t.sec / 60;
		t.sec %= 60;
		t.hour += t.min / 60;
		t.min %= 60;
		return t;
	}
};

int main()
{
	//int a(10);
	//int b(20);
	//int c;
	//c = a.Addtime(b);
	//c.outTime
	Time t1(1, 10, 30);
	Time t2(2, 20, 40);
	Time t3;

	t3 = t1.AddTime(t2);
	t3.OutTime();


}