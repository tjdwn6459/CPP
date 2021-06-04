#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

class Human //이름과 나이 멤버를 가지는 클래쓰
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
	void intro()
	{
		printf("이름 = %s, 나이 = %d", name, age);
	}
};

class Student :public Human//student클래쓰가 상속을 받고 있다
{
protected:
	int stunum;
public:
	Student(const char* aname, int aage, int astunum) : Human(aname, aage)
	{
		stunum = astunum;
	}
	void study()
	{
		printf("이이는 사 ");
	}
};

class Graduate : public Student//graduate는 상속을 받고 있다(맨위의 human의 클래쓰를 상속 받고 있다)
{
protected:
	char thesis[32];
public:
	Graduate(const char* aname, int aage, int astunum, const char* athesis) : Student(aname, aage, astunum)
	{
		strcpy(thesis, athesis);
	}
	void research() {
		printf("%s을 연구하고 논문을 쓴다 \n", thesis);
	}
};

int main()
{
	Graduate moon("문정문", 45, 353535, "게임방 상권 분석");
	moon.research();

}