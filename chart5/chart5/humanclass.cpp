#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

class Human {

private:

	char* name;
	int age;

public:
	Human() {}
	Human(const char* aname, int aage)
	{
		name = new char[strlen(aname) + 1];
		strcpy(name, aname);
		age = aage;
	}

	~Human()
	{
		printf("��ü�� �ı��Ǿ����ϴ�\n");
		delete[]name;
	}
	//���� ������ 
	Human(const Human& other)
	{
		name = new char[strlen(other.name) + 1];
		strcpy(name, other.name);
		age = other.age;

	}

	//���Կ����� 
	const Human& operator=(const Human& other)
	{
		
		name = new char[strlen(other.name) + 1];
		strcpy(name, other.name);
		age = other.age;
		return *this;
	}


	void print()
	{
		printf("�̸� : %s, ���� : %d\n", name, age);
	}
};

void printview(Human& who)
{
	who.print();
}

int main()
{
	Human who("�ȼ���", 26); 
	who.print();
	Human po(who);
	printview(po);
	Human xman;
	xman = who;
	printview(xman);

	return 0;
}
