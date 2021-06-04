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
		strcpy_s(name,len,aname);  //len ���� �� ���ִ� ���� ����
	}
	~Human()//�ı���
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
		
		printf(" My Major is %s �Դϴ�.", major);
	}
};

int main()
{
	Human my("ȫ�浿");
	my.printname();
	Student s("�̸�", "Iot");
	s.printmajor();//My name is ȫ�浿 My Major is IOT �Դϴ�.

	return 0;
}