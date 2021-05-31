#include <stdio.h>
#include <string.h>

//디폴트 생성자 -> 인수를 취하지 않는 생성자
class Human
{
private://내부적으로만 사용하는 멤버 (외부에서 접근 불가능)
	char name[12];
	int age;

public://외부로 공개되어 함수는 자유롭게 호출 가능
	Human() {//()인수가 없다 
		strcpy(name, "이름없음"); //name 를  "이름없음"으로 초기화
		age = 0; //age를 0으로 값을 초기화
	}
	void intro() {
		printf("이름 = %s, 나이 = %d\n", name, age);
	}
};

int main()
{
	Human momo;//(클래쓰명 + 객체변수명)객체 선언문
	momo.intro();
}