#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

class Human //�̸��� ���� ����� ������ Ŭ����
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
		printf("�̸� = %s, ���� = %d", name, age);
	}
};

class Student :public Human//studentŬ������ ����� �ް� �ִ�
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
		printf("���̴� �� ");
	}
};

class Graduate : public Student//graduate�� ����� �ް� �ִ�(������ human�� Ŭ������ ��� �ް� �ִ�)
{
protected:
	char thesis[32];
public:
	Graduate(const char* aname, int aage, int astunum, const char* athesis) : Student(aname, aage, astunum)
	{
		strcpy(thesis, athesis);
	}
	void research() {
		printf("%s�� �����ϰ� ���� ���� \n", thesis);
	}
};

int main()
{
	Graduate moon("������", 45, 353535, "���ӹ� ��� �м�");
	moon.research();

}