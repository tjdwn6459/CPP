#include <stdio.h>
#include <string.h>
#define CRT_SECURE_NO_WARNINGS

class Human
{
private:
	char name[12];
	int age;
public://생성자 
	Human(const char* aname, int aage)
	{
		strcpy_s(name, aname);
		age = aage;
	}

	void intro()
	{
		printf("이름 = %s, 나이 = %d\n", name, age);
	}
};

int main()
{
	Human kim("김상형", 29); /*Human kim = Human("김상형", 29)*/
	kim.intro();

}