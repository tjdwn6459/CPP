#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
//�������̵�: �θ�� �ڽ��� ��Ӱ���, �θ𿡼� �̹� ���ǵ��Լ��� ���� �̸����� �ڽ� Ŭ�������� ������ �ϴ°�, 
//��ü�� ���� ���� ȣ��Ǵ� �Լ��� �ٸ��� 
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
		printf("�̸� = %s, ���� = %d\n", name, age);
	}
};

class Student : public Human //����������

{
protected:
	int stunum;

public:
	Student(const char* aname, int aage, int aastunum) :Human(aname, aage) {
		stunum = aastunum;
	}
	void study()
	{
		printf("���̴� �� \n");
	}
	void intro() {
		printf("%d�й� %s�Դϴ� \n", stunum, name);
	}
};

int main()
{
	Human kim("�ȼ���", 26);
	kim.intro();
	Student han("���Ѱ�", 13, 343434);
	han.intro();
    //�̸��� ���̸� ���� ������ �Լ��� �θ�Ŭ������ �ֱ⿡ ���� ���� �����ڸ� ���ؼ� (::) �Լ� ȣ��
	han.Human::intro();//�������̵� ���Լ��� ���� ������ ���� 
}

