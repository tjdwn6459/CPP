#include <stdio.h>

class Time
{
	friend const Time operator+(const Time& me, const Time& other);//외부의 연산자 함수 멤버를 자유롭게 읽으려면 FRIEND선언이 필요하다
private:

	int hour, min, sec;
public:

	Time(){}
	Time(int h, int m, int s) { hour = h; min = m; sec = s; }
	void OutTime() {
		printf("%d:%d:%d\n", hour, min, sec);
	}
};

const Time operator+(const Time& me, const Time& other) { //전역으로 연산자 함수를 밖으로 뺌 
	Time t;
	t.sec = me.sec + other.sec;
	t.min = me.min + other.min;
	t.hour = me.hour + other.hour;

	t.min += t.sec / 60;
	t.sec %= 60;
	t.hour +=t.min / 60;
	t.min %= 60;
	return t;
}

int main()
{
	Time t1(1, 10, 30);
	Time t2(2, 20, 40);
	Time t3;

	t3 = t1 + t2;
	t3.OutTime();


}