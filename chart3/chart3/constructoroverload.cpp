#include <stdio.h>
//오버로딩 
class Time
{
private:
	int hour, min, sec;
public:
	Time(int h, int m, int s) { 1)//생성자1
		hour = h;
		min = m;
		sec = s;
	}

	//3)생성자2 (초를 주고 시분초로 나눠서 객체로 생성해서 사용)
	Time(int abssec) {
		hour = abssec / 3600;
		min = (abssec / 60) % 60;
		sec = abssec % 60;
	}

	void OutTime() {//2), 4)
		printf("현재시간은 %d:%d:%d 입니다 \n", hour, min, sec);
	}
};

int main()
{
	Time now(12, 30, 40);//Time클래스에 now인스턴스 생성 (변수 3개 오버로딩)-> 갯수랑 자료형이달라서 Time같은거 쓸 수 있다 
	now.OutTime();
	Time noon(44000);//noon에 인스턴스 생성(변수 1개 오버로딩) 
	noon.OutTime();


}