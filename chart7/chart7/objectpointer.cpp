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
		printf("�̸� : %s, ���� = %d\n", name, age);
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
		printf("%d�й� %s�Դϴ�.\n", stunum, name);

	}
	void study()
	{
		printf("���̴»� �̻����� �̻���\n");
	}

};

int main()
{
	Human h("����", 10);
	Student s("���л�", 13, 111111);
	Human* pH;
	Student* pS;

	pH = &h;
	pS = &s;
	pH = &s;

	//�ڽ� �ڷ������� �θ� ����Ű�°��� �ȵǱ⿡ �θ�(student*)�� ����ȯ�� ������Ѵ� 
	pS = (Student*)&h;
	pS->intro();


}