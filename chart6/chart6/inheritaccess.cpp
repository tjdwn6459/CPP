#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>
#include <string.h>

class Human {
protected://��� ����������-> ��ӹ��� ���� ��밡��
	char name[12];
	int age;

public://��� ���� ���� 
	Human(const char* aname, int aage) {
		strcpy_s(name, aname);
		age = aage;

	}

	void intro()
	{
		printf("�̸�= %s, ���� = %d\n", name, age);
	}
};
class Student : public Human//studentŬ������ Human���׼� ��� ����
{
protected://��ӹ޾����� ����ϴ� ���� ������ 
	int stunum;
public:
	Student(const char* aname, int aage, int astumum) : Human(aname, aage)
	{
		stunum = astumum;
	}

	void study()//�ڽ�Ŭ���� ���ο����� �ֱ⶧���� �θ�Ŭ���������� ����� �Ұ���
	{
		printf("���̴� �� �̻� ��\n");
	}

	void report()
	{
		//�����ڿ��� �θ��� Ŭ������ ��ӹ޾����ϱ� ����Լ��� ��밡���ϴ� 
		printf("�̸� = %s, �й� :%d ���� �����մϴ�.", name, stunum);
	}
};

int main()
{
	Student kim("�ȼ���", 26, 3424242);
	kim.intro();
	kim.study();
	kim.report();


}