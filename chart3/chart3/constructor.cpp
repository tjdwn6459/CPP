#include <stdio.h>
#include <string.h>
#define CRT_SECURE_NO_WARNINGS

class Human
{
private:
	char name[12];
	int age;
public://������ 
	Human(const char* aname, int aage)
	{
		strcpy_s(name, aname);
		age = aage;
	}

	void intro()
	{
		printf("�̸� = %s, ���� = %d\n", name, age);
	}
};

int main()
{
	Human kim("�����", 29); /*Human kim = Human("�����", 29)*/
	kim.intro();

}