#include <stdio.h>

struct  SHuman
{
	char name[12];
	int age;

	void intro();
};

void SHuman::intro() // ::범위지정 연산자를 이용해 SHuman의 구조체 사용을 위해 밖으로 꺼내다 
{
	printf("이름 = %s, 나이 = %d\n", name, age);
}

int main()
{

	SHuman kim = { "김상형", 29 };
	kim.intro();
}