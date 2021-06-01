#include <stdio.h>

class Time
{
private:
	int hour, min, sec;

public:

	//생성자의 인수는 3개를 받는다 
	Time(int h, int m, int s)
	{
		SetHour(h);//h라는 인수를 가지고 함수를 호출
		SetMinute(m);//m이라는 인수를 가지고 함수를 호출
		sec = s; //sec에 s를 저장
	}

	int GetHour() { return hour; }//private를 직접적으로 읽어오지 못해서 get함수 사용 


	//전달 받은 h를 가지고 
	void SetHour(int h) {
		if (h >= 0 && h < 24) {//조건을 만족 시키면
			hour = h;//hour라는 멤버 변수에 저장
		}
	}

	int GetMinute() { return min; }

	void SetMinute(int m) {
		if (m >= 0 && m < 60) {
			min = m;
		}
	}

	int GetSecond() { return sec; }

	void OutTime() {
		printf("현재 시간은 %d:%d:%d입니다 \n", hour, min, sec);
	}
};

int main()
{

	Time now(12, 34, 56); //3개의 인수를 전달해준다 -> 생성자 호출
	now.SetHour(40);//now멤버 변수에 sethour에 인수 '40'을 전달 해준다 
	now.OutTime();//전달해주는 값을 가지고 함수를 호출 후 출력
	now.SetHour(9);//인수 '9'를 함수에 전달 
	now.OutTime();
}