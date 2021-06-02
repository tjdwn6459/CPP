#include <stdio.h>

class Time
{
private:
	int hour, min, sec;

public:
	Time(int h, int m, int s)
	{
		SetTime(h, m, s);
	}

	void SetTime(int h, int m, int s) //일반적인 멤버함수 타입
	{
		hour = h;
		min = m;
		sec = s;
	}

	void OutTime()const {//outtime라는 함수가 상수화 ->멤버변수를 건들지 말라(변환이 안댄다)
		printf("현재시간은 %d:%d:%d입니다 \n", hour, min, sec);

		//hour = 24;//hour의 값을 변경시키려 하지만 안된다
	}
};

int main()
{
	Time now(12, 34, 56);//클래스의 인스턴스를 선언하도 값을 보낸다 
	now.SetTime(11, 22, 33);
	now.OutTime();

	const Time metting(16, 00, 00);//metting객체를 상수화  한다->상수화 시킨 멤버 함수만 사용이 가능(일반 멤버변수는 사용안댄다)
	
	metting.OutTime();//상수멤버함수 


}