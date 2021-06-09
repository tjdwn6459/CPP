#include <stdio.h>

struct Human //구조체 선언
{
	char name[20]; //멤버 변수
	int age;
};

void intro(Human who) //구조체의 멤버를 쓰고 객체 who 입력으로
{
	printf("이름 = %s, 나이 = %d", who.name, who.age);
}
int main()
{

	Human kim = { "김상형", 29 };
	intro(kim);//함수의 kim의 정보를 호출한다 
}