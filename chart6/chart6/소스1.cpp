#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
class Human
{
private:
	char* name;
public:
	Human(const char* aname) {
		int len = strlen(aname) + 1;
		name = new char[len];
		strcpy_s(name,len,aname);  //len 복사 할 수있는 길이 지정
	}
	~Human()//파괴자
	{
		delete[] name;
	}

	void printname()
	{
		cout << "My name is" << name  ;
	}
};
class Student:public Human
{
private:
	char* major;

public:
	Student(const char* aname, const char* amajor) :Human(aname)
	{
		int len = strlen(amajor) + 1;
		major = new char[len];
		strcpy_s(major,len, amajor);
	}
	void printmajor() {
		

		printname();
		
		printf(" My Major is %s 입니다.", major);
	}
};

int main()
{
	Human my("홍길동");
	my.printname();
	Student s("이름", "Iot");
	s.printmajor();//My name is 홍길동 My Major is IOT 입니다.

	return 0;
}