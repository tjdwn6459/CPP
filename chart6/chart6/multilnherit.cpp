#include <stdio.h>
#include<conio.h>

//다중상속: 여러개의 클래쓰로 부터 상속을 받는다 (새로운 클래쓰를 쉽게 만들고 , 추가도 가능하다)
class Date
{
protected:
	int year, month, day;
public:
	Date(int y, int m, int d) { year = y; month = m; day = d; }
	void OutDate() { printf("%d%d%d", year, month, day); }
};

class Time
{
protected:
	int hour, min, sec;
public:
	Time(int h, int m, int s) { hour = h; min = m; sec = s; }
	void OutTime() { printf("%d:%d:%d", hour, min, sec); }
};

class DateTime : public Date, public Time //다중상속 -> 상속받을 클래쓰를  : 뒤에 선언
{
private:
	bool bEngMessage;//메세지 출력 언어를 지정하는
	int milisec;//초단위의 정밀한 시간을 저장

public:
	DateTime(int y, int m, int d, int h, int min, int s, int ms, bool b = false)//상속받는 모든 멤버변수 초기화
		:Date(y, m, d), Time(h, min, s)
	{
		milisec = ms;
		bEngMessage = b;
	}

	void OutNow()//outnow멤버함수를 정의해 상속받은 outdate, outtime함수를 차례대로 호출 
	{
		printf(bEngMessage ? "Now is" : "지금은 ");
		OutDate();
		_putch(' ');
		OutTime();
		printf(".%d", milisec);
		puts(bEngMessage ? "." : "입니다.");


	}
};
int main()
{
	DateTime now(2017, 6, 29, 12, 30, 58, 99);
	now.OutNow();
}