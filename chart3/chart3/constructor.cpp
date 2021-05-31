#include <stdio.h>
#include <string.h>
#define CRT_SECURE_NO_WARNINGS

class Human
{
private:
	char name[12];
	int age;
public://생성자 
	Human(const char* aname, int aage)//계산할때 , 메모리 동적할당
	{
		strcpy_s(name, aname); // name에 aname의 문자열을 복사 (private의 변수를 바로 접근을 못하니까)
		age = aage;//age에 aage의 값을 대입
	}

	void intro()
	{
		printf("이름 = %s, 나이 = %d\n", name, age);
	}
};

int main()
{
	Human kim("김상형", 29); /*Human kim = Human("김상형", 29)*///human클래스의 인스턴스 kim 생성 하고 자동으로 생성자 호출
	kim.intro();//함수 호출 

}