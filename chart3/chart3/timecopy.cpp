#include <stdio.h>


//복사 생성자 -> 객체의 복사가 이루어질 때 호출되는 생성자이다
class Time
{
private:
	int hour, min, sec;

public://직접 복사 생성자 정의 
	Time(int h, int m, int s) { //클래스명 생성할객체 (이미 생성된 객체)
		hour = h;
		min = m;
		sec = s;
	}

	void OutTime() {
		printf("현재 시간은 %d:%d:%d입니다.\n", hour, min, sec);
	}
};

int main()
{
	Time now(12, 34, 56);//time클래스의 now객체를 만들다(인수3개를 가진 생성자 호출) 각각 hour, min, sec에 저장
	//Time then = now; //then대입해서 객체 생성
	Time then(now); //now라는 객체를 만들고 이를 then이라는 객체에 복사한다 


	then.OutTime();//then의 함수outtime호출하면 그 해당값을 가진게 복사되어 출력한다 
}