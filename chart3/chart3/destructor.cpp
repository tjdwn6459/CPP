#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS
class Human
{
private:
	char* pname;
	int age;

public:
	Human(const char* aname, int aage) {//1)�����Ҵ��� ���� �����ڸ� ����
		pname = new char[strlen(aname) + 1]; // pname�� �����Ҵ� �ϱ����ؼ� aname���
		strcpy(pname, aname); //(�����Ҵ� �Ȱ�)����
		age = aage;
		printf("%s ��ü�� �����ڰ� ȣ��Ǿ����ϴ�. \n", pname);
	}

	~Human() {//3)�Ҹ��� (���� �����Ҵ��� �����ϱ����� �Ҹ��ڸ� ����)
		printf("%s ��ü�� �ı��Ǿ����ϴ� .\n", pname);
		delete[]pname;//�����Ҵ� �Ѱ͸� ���� 
	}


	void intro() {//2)
		printf("�̸� = %s, ���� = %d\n", pname, age);
	}
};

int main()
{
	Human boy("����ѹ��ź��̿͵η�� ", 12);//1)class�� ��������� ȣ���ϸ� ������ �ڵ� ȣ��
	boy.intro();//2)
	//3)���α׷��� ������ �Ҹ��� �ڵ� ȣ��


}