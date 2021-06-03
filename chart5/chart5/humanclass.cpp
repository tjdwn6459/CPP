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
		printf("객체가 파괴되었습니다\n");
		delete[]name;
	}
	//복사 생성자 
	Human(const Human& other)
	{
		name = new char[strlen(other.name) + 1];
		strcpy(name, other.name);
		age = other.age;

	}

	//대입연산자 
	const Human& operator=(const Human& other)
	{
		
		name = new char[strlen(other.name) + 1];
		strcpy(name, other.name);
		age = other.age;
		return *this;
	}


	void print()
	{
		printf("이름 : %s, 나이 : %d\n", name, age);
	}
};

void printview(Human& who)
{
	who.print();
}

int main()
{
	Human who("안성주", 26); 
	who.print();
	Human po(who);
	printview(po);
	Human xman;
	xman = who;
	printview(xman);

	return 0;
}
