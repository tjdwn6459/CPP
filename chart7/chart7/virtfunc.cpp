#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdio.h>

class Human
{
protected:
	char name[23];
	int age;

public:
	Human(const char* aname, int aage)
	{
		strcpy(name, aname);
		age = aage;
	}
	virtual void intro()
	{
		printf("이름 = %s, 나이 = %d\n", name, age);
	}
};
class Student : public Human
{
protected:
	int stunum;

public:
	Student(const char* aname, int aage, int astunum) : Human(aname, aage)
	{
		stunum = astunum;
	}
	void intro()
	{
		printf("%d학번 %s입니다\n", stunum, name);
	}
	void study()
	{
		printf("이이는 사 이삼은 육\n");
	}
};
int main()
{
	Human h("김사람", 10);
	Student s("이학생", 12, 1234567);
	Human* pH;

	pH = &h;
	pH->intro();
	pH = &s;
	pH->intro();


}