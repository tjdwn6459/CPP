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
		printf("�̸� = %s, ���� = %d\n", name, age);
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
		printf("%d�й� %s�Դϴ�\n", stunum, name);
	}
	void study()
	{
		printf("���̴� �� �̻��� ��\n");
	}
};
int main()
{
	Human h("����", 10);
	Student s("���л�", 12, 1234567);
	Human* pH;

	pH = &h;
	pH->intro();
	pH = &s;
	pH->intro();


}