#include <stdio.h>
#include <string.h>

class Human
{
protected:
	char name[12];
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

class Student :public Human
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
		printf("%d학번 %s 입니다.\n", stunum, name);
	}
	virtual void study()
	{
		printf("이이는 사 , 이삼은 육\n");
	}
};

void IntroSomeBody(Human* pH)
{
	pH->intro();
}

int main()
{


	Human h("김사람", 10);
	Student s("이학생", 15, 12345667);

	IntroSomeBody(&h);
	IntroSomeBody(&s);
}