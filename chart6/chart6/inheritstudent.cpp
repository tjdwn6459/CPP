#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

class Human
{
private:
	char name[12];
	int age;

public:
	Human(const char* aname, int aage)//생성자 -> 객체 생성  
	{
		strcpy(name, aname);
		age = aage;
	}

	void intro()
	{
		printf("이름 = %s, 나이 =%d\n", name, age);
	}
};
class Student :public Human//sudent는 human의 클래스를 상속 받았다 
{
private:
	int stunum;

public:
	Student(const char* aname, int aage, int astunum) : Human(aname, aage)// Human(aname, aage)부모클래쓰 생성자 호출하며 초기화 이뤄짐 
	{
		stunum = astunum;//부모클래쓰에서 멤버함수 사용하고 stunum의 값이 초기화 댄다 
	}

	void study()
	{
		printf("이이는 사 , 이삼은 육, 이사 팔\n");
	}
};

int main()
{


	Human kim("안성주", 12);
	kim.intro();
	Student han("김한결", 13, 12454);//객체 생성하고 3개의 실인수 전달
	han.intro();
	han.study();
}