#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

class Human
{
private:
	char name[12];
	int age;

public:
	Human(const char* aname, int aage)//������ -> ��ü ����  
	{
		strcpy(name, aname);
		age = aage;
	}

	void intro()
	{
		printf("�̸� = %s, ���� =%d\n", name, age);
	}
};
class Student :public Human//sudent�� human�� Ŭ������ ��� �޾Ҵ� 
{
private:
	int stunum;

public:
	Student(const char* aname, int aage, int astunum) : Human(aname, aage)// Human(aname, aage)�θ�Ŭ���� ������ ȣ���ϸ� �ʱ�ȭ �̷��� 
	{
		stunum = astunum;//�θ�Ŭ�������� ����Լ� ����ϰ� stunum�� ���� �ʱ�ȭ ��� 
	}

	void study()
	{
		printf("���̴� �� , �̻��� ��, �̻� ��\n");
	}
};

int main()
{


	Human kim("�ȼ���", 12);
	kim.intro();
	Student han("���Ѱ�", 13, 12454);//��ü �����ϰ� 3���� ���μ� ����
	han.intro();
	han.study();
}