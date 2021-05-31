#include <stdio.h>

class Human //멤버변수와 함수 둘다 포함
{
public:
	char name[12];
	int age;

	void intro() {
		printf("이름 = %s, 나이 = %d\n", name, age);
	}
};

int main()
{
	Human kim = { "김상형", 29 };//human클래스안에 객체가kim
	kim.intro();
}