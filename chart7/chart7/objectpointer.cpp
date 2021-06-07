#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

class Human
{
protected:
	char name[12];
	int age;

public:
	Human(const char* aname, int aage) {
		strcpy(name, aname);
		age = aage;
	}

	void intro()
	{
		printf("이름 : %s, 나이 = %d\n", name, age);
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
		printf("%d학번 %s입니다.\n", stunum, name);

	}
	void study()
	{
		printf("이이는사 이삼은육 이사팔\n");
	}

};

int main()
{
	Human h("김사람", 10);
	Student s("이학생", 13, 111111);
	Human* pH;
	Student* pS;

	pH = &h;
	pS = &s;
	pH = &s;

	//자식 자료형으로 부모를 가리키는것이 안되기에 부모를(student*)로 형변환을 해줘야한다 
	pS = (Student*)&h;
	pS->intro();


}