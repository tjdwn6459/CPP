#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

template<typename T>
void swap(T& a, T& b)
{
	T t;
	t = a; a = b; b = t;
}

class Human
{
private:
	char* name;
	int age;

public:
	Human() {
		name = new char[1];
		name[0] = NULL;
		age = 0;
	}
	//인수가 2개인 생성자
	Human(const char* aname, int aage) 
	{
		name = new char[strlen(aname) + 1];
		strcpy(name, aname);
		age = aage;
	}
	//참조형태로 매개변수로 들어가있는 -> 복사생성자
	Human(const Human& other)
	{
		name = new char[strlen(other.name) + 1];
		strcpy(name, other.name);
		age = other.age;
	}
	//연산자 오버로딩
	Human& operator = (const Human& other)
	{
		if (this != &other)
		{
			delete[]name;
			name = new char[strlen(other.name) + 1];
			strcpy(name, other.name);
			age = other.age;
		}
		return *this;
	}

	~Human()//파괴자 
	{
		delete[]name;
	}

	void intro()
	{
		printf("이름 = %s, 나이 = %d\n", name, age);
	}
};

int main()
{
	Human lee("이배떡", 10);
	Human park("박찜닭 ", 20);
	lee.intro();
	park.intro();
	swap(lee, park);
	lee.intro();
	park.intro();
}