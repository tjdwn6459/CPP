#include <stdio.h>

class Time
{
private:
	int hour, min, sec;

public:
	Time(){}
	Time(int h, int m, int s) { hour = h; min = m; sec = s; }
	void OutTime() {
		printf("%d:%d:%d", hour, min, sec);
	}


	//더하기 기능을 하는 연산자 생성 operator +
	const Time operator +(const Time& other)const {//operator가 연산자 함수 이름(객체가 매개변수로 쓰일땐 레퍼런스 타입으로 쓰인다)
		Time t; //임시 객체 생성
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
	Time t1(1, 10, 30);
	Time t2(2, 20, 40);
	Time t3;

	t3 = t1 + t2;//객체들도 이렇게 기본연산자 처럼 표기가 가능하다 
	/*t3 = t1.operator+(t2); -> 로 사용이 가능 */
	t3.OutTime();


}